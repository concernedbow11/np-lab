#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
void main(){
   pid_t cpid;
   if(fork()==0)
       printf("child pid=%d\n",cpid);
   else
       cpid = wait(NULL);
   printf("parent pid=%d\n",getpid());
}
