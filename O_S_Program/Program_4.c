#include<stdio.h>
#include<unistd.h>

int main(){
    long i;
    printf("Process ID %d\n",getpid());
    for(int i=0;i<=40;i++){
        printf("i is %d\n",i);
    }
}