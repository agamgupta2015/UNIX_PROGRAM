#include<stdio.h>
#include<unistd.h>

int main(){
    int ppid;
    ppid = getppid();
    printf("Parent Process ID is %d \n",ppid);
}