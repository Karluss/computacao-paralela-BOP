#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
   pid_t pid;
   if (argc != 2)
   {
        printf("arg missing or exceeding\n");
        exit(0);
   }cess to end
  
    if ( atoi ( argv[1] ) <0 )
    {
        printf("negative number entered %d", atoi(argv[1]));
        exit(0);
    }
  
    pid=fork();
  
    if ( pid<0 )
    {
        printf("failed to create child\n");
        exit(0);
    }
    else if (pid == 0){

        int i, num, j;
        
	num = atoi(argv[1]);
        j = num;

        for (i=1; j > 1; j = j -1) {
             i=i*j;
        }

        printf("The factorial of %d is %d\n",num,i);
	exit(0);
   }

    else
    {
        wait(NULL);
  
        printf("Done\n");
    }
}
