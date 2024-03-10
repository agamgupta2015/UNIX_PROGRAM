#include<stdio.h>
#include<unistd.h>

int main(){
    printf("This is to Demostrate the fork()\n");
    fork();
    printf("Hello World\n");
}