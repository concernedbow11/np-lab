 status parameter specifies the value returned to the parent process.
#include <stdio.h>
#include <stdlib.h>

void main(){
   printf("beginning\n");

   printf("exiting the program\n");
   exit(0);

   printf("end of program");
}
