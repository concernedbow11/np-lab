include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
void main(){
   pid_t child_pid = fork();
   if(child_pid > 0){
       printf("parent after 10 seconds");
       sleep(10);
   }
   else{
       printf("child\n");
       exit(0);
