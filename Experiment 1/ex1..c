#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc,char* argv[]){
   printf("PID of ex1 = %d\n",getpid());
   char* args[] = {"Hello 51",NULL};
   execvp("./ex2",args);
   printf("back to ex1.c");
   return 0;
}
