#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main()
{
    pid_t pid;
    int shmid;
    int *shmPTR;
    int status;

    shmid = shmget(IPC_PRIVATE, 4 * sizeof(int), IPC_CREAT | 0666);

    if ((shmid = shmget(IPC_PRIVATE, 4 * sizeof(int), IPC_CREAT | 0666) == -1))
    {
        perror("Erro - SHMEGT");
        exit(1);
    }

    shmPTR = (int *)shmat(shmid, NULL, 0);
    if ((int)shmPTR == -1)
    {
        printf("Erro - SHMAT");
        exit(1);
    }

    pid = fork();

    if (pid < 0)
    {
        printf("failed to create child\n");
        exit(0);
    }
    else if (pid == 0)
    {
        exit(0);
    }

    else
    {
        wait(NULL);
        printf("\n%d\n", pid);
        printf("Done\n");
    }
}
