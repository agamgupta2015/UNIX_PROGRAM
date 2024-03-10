#include<stdio.h>
#include<unistd.h>

int main(){
    printf("Run the ps -el command\n");
    sleep(10);
    printf("Run the ps -el command once again\n");
    for(;;);
}