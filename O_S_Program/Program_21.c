#include<stdio.h>
#include<unistd.h>

int main(){
    int pid;
    pid = fork();

    if(pid==0){
        for(int i=0;i<10;i++){
            printf("i is %d\n",i);
        }
    }else if(pid>0){
        for(int j=11;j<20;j++){
            printf("j is %d\n",j);
        }
    }
}