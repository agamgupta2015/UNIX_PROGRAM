#include<stdio.h>
#include<unistd.h>

int main(){
    int pid;
    pid = fork();

    if(pid<0)
        printf("Fork Falied");
    else
        printf("Fork Successful");
}