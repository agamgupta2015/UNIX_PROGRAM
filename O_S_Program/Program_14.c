#include<stdio.h>
#include<unistd.h>

int main(){
    int pid;
    pid = fork();

    if(pid==0){
        printf("I am the child my process Id %d\n",getpid());
        printf("The child parent process Id %d\n",getppid());
    }else{
        printf("I am the parent my process Id %d\n",getpid());
        printf("The parents parent process Id %d\n",getppid());
    }
}