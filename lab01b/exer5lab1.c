#include <stdio.h>
#include <stdlib.h>


int main(){

    int lin, col, tam;

    printf("Qual dimensão vocẽ deseja para sua matriz quadrada? \n");
    scanf("%d", &tam);

    int matrix[tam][tam];

    printf("Digite os valores da matriz: \n");
    for (lin=0; lin<tam; lin++){
        printf("Digite os valores para a %d linha.\n", lin+1);
        for (col=0; col<tam; col++){
            scanf("%d", &matrix[lin][col]);
        }
   }
   
   return 0;
}

void Multi (int lin, int col, int matrix[lin][col]){

    printf("\n******Multiplicação******\n");
    char opcao;
    int posicao, num;

    printf("Deseja multiplicar uma linha ou coluna? (L/C): ");
    scanf(" %c", &opcao);

    if (opcao == 'L' || opcao == 'l'){
        printf("\nQual linha deseja ser multiplicada? (de 1 a %d): ", lin);
        scanf("%d", &posicao);

        printf("\nPor qual número deseja multiplicar?: ");
        scanf("%d", &num);

        for (int i = 0; i < col; i++){
            matrix[posicao-1][i] *= num;
        }
    }

    if (opcao == 'C' || opcao == 'c'){
        printf("\nQual linha deseja ser multiplicada? (de 1 a %d): ", col);
        scanf("%d", &posicao);

        printf("\nPor qual número deseja multiplicar?: ");
        scanf("%d", &num);

        for (int j = 0; j < lin; j++){
            matrix[posicao-1][j] *= num;
        }
    }
}
