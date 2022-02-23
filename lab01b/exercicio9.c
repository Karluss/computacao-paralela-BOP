#include <stdio.h>
#include <locale.h>

void semNegativo(int numLinha, int numColuna,int matriz[numLinha][numColuna]){
    printf("\n------------Matriz sem negativos------------\n");

    int matrizSemNegativo[numLinha][numColuna];

    for(int i = 0; i < numLinha; i++){
        for (int j = 0; j < numColuna; j++){
            if (matriz[i][j] > 0){
                matrizSemNegativo[i][j] = matriz[i][j];
            }
            else{
                matrizSemNegativo[i][j] = -(matriz[i][j]);
            }
        }
    }

    for(int i = 0; i < numLinha; i++){
        for (int j = 0; j < numColuna; j++){
            printf("%d ", matrizSemNegativo[i][j]);
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

    semNegativo(numLinha, numColuna, matriz);

    return 0;

}
