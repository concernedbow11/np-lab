#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int fact(int x){
   return x>0?(x * fact(x-1)):1;
}

void main(){
   int n = 1;
   printf("enter the value for n\n");
   scanf("%d",&n);
   if(fork()==0){
       for(int j=1;j<=n;j++){
           printf("%d\t",fact(j));
       }
   }
   else{
       wait(NULL);
       exit(0);
   }
   // child process displaying factorial
}
