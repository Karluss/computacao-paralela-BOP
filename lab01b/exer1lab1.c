#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL,"PT_BR");
    
    int tam, i, j, menor, linha = 1;

    printf("Qual dimensão vocẽ deseja para sua matriz quadrada? \n");
    scanf("%d", &tam);

    int matriz[tam][tam];

    for (i=0; i<tam; i++){
        printf("Digite os valores para a %d linha.\n", i+1);
        for (j=0; j<tam; j++){
            scanf("%d", &matriz[i][j]);
        }
        menor = matriz[0][0];

   }
   printf("A matriz quadrada desejada é: \n");
   for (i=0;i<tam;i++){
       for (j=0;j<tam;j++){
           printf("%d", matriz[i][j]);
            }
           printf("\n");
        }

    for (i=0; i<tam; i++){
        for (j=0; j<tam; j++){
            if (matriz[i][j]<menor){
                menor = matriz[i][j];
                linha = i + 1;
                printf("%d", matriz[i][j]);
            }

        }
    }
    
    printf("\nO menor valor da matriz quadrada é: [%d]", menor);
    printf("\n");
    system("pause");
    return 0;
}

