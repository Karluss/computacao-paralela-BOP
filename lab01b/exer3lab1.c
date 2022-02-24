#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"PT_BR");

    int num, i, j;

    printf ("Digite um número impar máximo do triangulo:\n");
    scanf("%d", &num);

    printf("\n");

    if (num % 2 == 0)
    {
        printf ("Número inválido, digite novamente:\n");
        scanf("%d", &num);
    }
    else
    {
        printf("\n*****Resultado*****\n");
        for (i=0; i<=(num/2)+1; i++)
        {
            for(j = i + 1; j <= num - i; j++)
            {
                printf("%d", j);
            }
            printf("\n");

        }
    }

    return 0;
}