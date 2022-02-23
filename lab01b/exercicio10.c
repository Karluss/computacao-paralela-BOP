#include <stdio.h>
#include <locale.h>

void multiplicarMatriz(int numColuna,int numLinha, int matriz[][numColuna]){
    printf("\n------------Multiplicação------------\n");
    char opcao;
    int posicao, num;

    printf("Deseja multiplicar uma linha ou coluna? (L/C): ");
    scanf(" %c", &opcao);

    if (opcao == 'L' || opcao == 'l'){
        printf("\nQual linha deseja ser multiplicada? (de 1 a %d): ", numLinha);
        scanf("%d", &posicao);

        printf("\nPor qual número deseja multiplicar?: ");
        scanf("%d", &num);

        for (int i = 0; i < numColuna; i++){
            matriz[posicao-1][i] *= num;
        }
    }
    else if (opcao == 'C' || opcao == 'c'){
        printf("\nQual coluna deseja ser multiplicada? (de 1 a %d): ", numColuna);
        scanf("%d", &posicao);

        printf("\nPor qual número deseja multiplicar?: ");
        scanf("%d", &num);

        for (int i = 0; i < numLinha; i++){
            matriz[i][posicao-1] *= num;
        }
    }

    printf("\n------------Matriz multiplicada------------\n");

    for(int i = 0; i < numLinha; i++){
        for (int j = 0; j < numColuna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numLinha;
    int numColuna;


    printf("------------Criando a Matriz------------\n");
    printf("\nNúmero de linhas: ");
    scanf("%d", &numLinha);

    printf("\nNúmero de colunas: ");
    scanf("%d", &numColuna);

    int matriz[numLinha][numColuna];

    printf("\n------------Inserindo valores na Matriz------------\n");

    for(int i = 0; i < numLinha; i++){
        printf("\nValores da linha %d", i+1);
        for (int j = 0; j < numColuna; j++){
            printf("\nValor %d: ", j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n------------Matriz criada------------\n");
    for(int i = 0; i < numLinha; i++){
        for (int j = 0; j < numColuna; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    multiplicarMatriz(numColuna, numLinha, matriz);

}
