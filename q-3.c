#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	int pid_t,pid,status;
	pid=fork();
	if(pid==0){
		printf("I am Child\n");
		exit(0);
	}
	else{
		wait(&status);
		printf("I am Parent\n");
		printf("The child PId=%d\n",pid);
	}
	return 0;
}
