#include <stdio.h>
#include <locale.h>

void criaTransposta(int numColuna, int numLinha, int matriz[numLinha][numColuna]){
    int transposta[numColuna][numLinha];

    for (int i = 0; i < numColuna; i++){
        for (int j = 0; j < numLinha; j++){
            transposta[i][j] = matriz[j][i];
        }
    }

    printf("\n");

    for(int i = 0; i < numColuna; i++){
        for (int j = 0; j < numLinha; j++){
            printf("%d ", transposta[i][j]);
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

    printf("\n------------Matriz Transposta------------\n");
    criaTransposta(numColuna,numLinha,matriz);


    return 0;
}
