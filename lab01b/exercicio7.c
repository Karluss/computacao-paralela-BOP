#include <stdio.h>

int main(){

    struct Pessoa{
        char nome[50];
        int idade;
        float peso;
        float altura;
    };


    struct Pessoa individuos[3];

    for (int i = 0; i < 3; i++){
        printf("\n--------------Informacoes do individuo %d--------------\n", i+1);

        printf("Nome: ");
        scanf("%s", individuos[i].nome);

        printf("\nIdade: ");
        scanf("%d", &individuos[i].idade);

        printf("\nPeso(em kg): ");
        scanf("%f", &individuos[i].peso);

        printf("\nAltura(em metros): ");
        scanf("%f", &individuos[i].altura);
    }

    printf("\n--------------Informacoes dos individuos--------------");

    for(int i = 0; i < 3; i++){
        printf("\n");
        printf("\n- Individuo %d", i+1);
        printf("\nNome: %s", individuos[i].nome);
        printf("\nIdade: %d anos", individuos[i].idade);
        printf("\nPeso: %.1f kg", individuos[i].peso);
        printf("\nAltura: %.2f m\n", individuos[i].altura);
    }
}
