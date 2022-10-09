#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int pid_t,pid;
	pid=fork();
	if(pid==0){
		sleep(6);
		printf("\nI am Child having PId =%d And PPId=%d",getpid(),getppid());
	}
	else{
		printf("I am Parent having PId=%d and PPId=%d",pid,getppid());
	}
	printf("\nterminating PId=%d\n",getpid());
	return 0;
}
