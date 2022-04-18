#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid;
  
    pid = fork();
  
    if ( pid<0 )
    {
        printf("failed to create child\n");
        exit(0);
    }
    else if (pid == 0){
        exit(0);
   }

    else
    {
        wait(NULL);
        printf("\n%d\n", pid);
        printf("Done\n");
    }
}
