#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    int shmid;
    int *shmPTR;
    int status;

    shmid = shmget(IPC_PRIVATE, 4 * sizeof(int), IPC_CREAT | 0666);

    if ((shmid < 0))
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

    shmPTR[0] = 1;
    printf("Server has saved %d in shared memory\n", shmPTR[0]);

    printf("Server is about to fork a child process...\n");
    pid = fork();

    if (pid < 0)
    {
        printf("failed to create child\n");
        exit(0);
    }
    else if (pid == 0)
    {
        printf("   Processo filho encontrou na memoria compartilhada o valor %d\n", shmPTR[0]);
        printf("   Processo filho vai realizar uma operacao de soma\n");
        printf("   %d + 2 = %d\n", shmPTR[0], shmPTR[0] + 2);
        printf("   Processo filho vai atualizar o valor na memoria compartilhada\n");
        shmPTR[0] = shmPTR[0] + 2;
        printf("   Processo filho atualizou o valor na memoria compartilhada para %d\n", shmPTR[0]);
        printf("   Processo filho vai desconectar da memoria compartilhada\n");
        printf("   Processo filho vai desalocar a memoria compartilhada\n");
        printf("   Processo filho vai finalizar...\n");
        exit(0);
    }
    else
    {
        wait(NULL);
        printf("   Processo pai encontrou na memoria compartilhada o valor %d\n", shmPTR[0]);
        printf("   Processo pai vai realizar uma operacao de multiplicao\n");
        printf("   %d * 4 = %d\n", shmPTR[0], shmPTR[0] * 4);
        printf("   Processo pai vai atualizar o valor na memoria compartilhada\n");
        shmPTR[0] = shmPTR[0] * 4;
        printf("   Processo pai atualizou o valor na memoria compartilhada para %d\n", shmPTR[0]);
        printf("   Processo pai vai desconectar da memoria compartilhada\n");
        printf("   Processo pai vai desalocar a memoria compartilhada\n");
        printf("   Processo pai vai finalizar...\n");
        exit(0);
    }
}
