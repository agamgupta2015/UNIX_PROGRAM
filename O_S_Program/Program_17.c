// Zombie Process

#include<stdio.h>
#include<unistd.h>

int main(){
    if(fork()>0){
        printf("Parent \n");
        sleep(10);
    }
}