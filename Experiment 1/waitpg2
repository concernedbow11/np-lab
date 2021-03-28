#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
void main(){
   pid_t cpid;
   if(fork()==0){
       printf("Child\n");
   }
   else{
       printf("Parent\n");
       wait(NULL);
       printf("\nStop\n");
   }
   printf("Final statement\n");
}
