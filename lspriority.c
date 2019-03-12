#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char * *argv){
	int pid, priority;
	pid=atoi(argv[1]);
	priority=getPriority(pid);
	if(priority==-1)
		printf(1,"Proceso not found with pid %d\n", pid);
	else
		printf(1, "Process priority: %d\n", priority);
	exit();
}