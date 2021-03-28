#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(){
   pid_t child_pid = fork();
   // Parent process
   if (child_pid > 0){
       printf("parent\n");
   }
   // Child process
   else if (child_pid==0){       
       sleep(15);
       printf("child process");
   }
    return 0;
}
