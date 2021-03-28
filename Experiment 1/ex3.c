#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
   printf("PID of ex3 = %d\n",getpid());
   char* args[] = {"hello",NULL};
   execv("./ex2",args);
   printf("back to ex3.c");
   return 0;
}
