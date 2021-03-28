#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

void main(){ 
   if(fork()==0){
       sleep(5);
       printf("first child");
   }
   else{
       if(fork()==0){
           sleep(2);
           printf("second child");
       }
       else{
           if(fork()==0){
               printf("third child");
           }
           else{
               sleep(10);
               printf("parent process");
               exit(0);
           }
       }
   }
 }
