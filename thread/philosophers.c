#include <stdio.h>
#include <pthread.h>
#include <time.h>
#include <semaphore.h>
#include <unistd.h>
#include <stdlib.h>

#define NUM_PHILO 5
#define NUM_FORKS 5

sem_t forks[NUM_FORKS];

long randomInRange(int start, int final){
	return start + random()%(final-start);
}
void * life(void *td){
	long id = (long)td;
	srandom((id + 1)*time(NULL));
	printf("Soy el filosofo %ld\n",id);
	while(1){
		//pensar
		printf("%ld> Voy a pensar\n",id);
		sleep(randomInRange(5,10));
		printf("%ld> Tengo hambre\n",id);
		if(id%2){			
			sem_wait(&forks[(id+1)%NUM_PHILO]);
			sem_wait(&forks[id]);
		}else {
			sem_wait(&forks[id]);
			sem_wait(&forks[(id+1)%NUM_PHILO]);
		}
		//comer
		printf("%ld> Voy a comer\n",id);
		sleep(randomInRange(2,6));
		sem_post(&forks[id]);
		sem_post(&forks[(id + 1)%NUM_PHILO]);
	}
}

int main(){
	pthread_t philos[NUM_PHILO];
	long t;
	
	for(t=0; t<NUM_FORKS; t++){
		sem_init(&forks[t],0,1);
	}
	for(t = 0; t < NUM_FORKS; t++){
		pthread_create(&philos[t],NULL,life,(void *)t);
	}
	pthread_exit(NULL);
} 