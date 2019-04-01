#include "types.h"
#include "user.h"
#include "date.h"
#include "x86.h"

#define SECS    0x00
#define MINS    0x02
#define HOURS   0x04
#define DAY     0x07
#define MONTH   0x08
#define YEAR    0x09

int
memcmp(const void *v1, const void *v2, uint n)
{
  const uchar *s1, *s2;

  s1 = v1;
  s2 = v2;
  while(n-- > 0){
    if(*s1 != *s2)
      return *s1 - *s2;
    s1++, s2++;
  }

  return 0;
}

void
microdelay(int us)
{
}

static uint
cmos_read(uint reg)
{
  outb(0x70,  reg);
  microdelay(200);

  return inb(0x71);
}

static void
fill_rtcdate(struct rtcdate *r)
{
  r->second = cmos_read(SECS);
  r->minute = cmos_read(MINS);
  r->hour   = cmos_read(HOURS);
  r->day    = cmos_read(DAY);
  r->month  = cmos_read(MONTH);
  r->year   = cmos_read(YEAR);
}

int
main(int argc, char *argv[])
{
	struct rtcdate r;
	date(&r);
	struct rtcdate t1, t2;
    int sb, bcd;

    sb = cmos_read(0x0B);

    bcd = (sb & (1 << 2)) == 0;

    // make sure CMOS doesn't modify time while we read it
    for(;;) {
    	fill_rtcdate(&t1);
        if(cmos_read(0x0A) & (1<<7))
        	continue;
    	fill_rtcdate(&t2);
    	if(memcmp(&t1, &t2, sizeof(t1)) == 0)
      	break;
  	}

  	// convert
  	if(bcd) {
		#define    CONV(x)     (t1.x = ((t1.x >> 4) * 10) + (t1.x & 0xf))
    	CONV(second);
    	CONV(minute);
    	CONV(hour  );
    	CONV(day   );
    	CONV(month );
    	CONV(year  );
		#undef     CONV
 	}

  	r = t1;
  	r.year += 2000;
	printf(1, "date: %d:%d:%d  %d/%d/%d\n", r.hour, r.minute, r.second, r.day, r.month, r.year);
	exit();
	return 0;
}