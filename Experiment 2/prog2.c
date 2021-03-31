#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

void main(){ 
   if(fork()==0){
       sleep(5);
       printf("child 1");
   }
   else{
       if(fork()==0){
           sleep(2);
           printf("child 2");
       }
       else{
           if(fork()==0){
               printf("child 3");
           }
           else{
               sleep(10);
               printf("Parent");
               exit(0);
           }
       }
   }
 }
