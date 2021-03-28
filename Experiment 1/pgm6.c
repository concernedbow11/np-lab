int main(){
    if(fork()&&fork())
       printf("forked");

   return 0;
 }
