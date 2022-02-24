#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    printf("*****MÉDIA DE ALUNOS*****");
    float n1, n2, n3, me, ma;

    printf("\nDigite a nota n1:\n");
    scanf("%f", &n1);

    printf("\nDigite a nota n2:\n");
    scanf("%f", &n2);

    printf("\nDigite a nota n3:\n");
    scanf("%f", &n3);

    printf("\nDigite o valor de ME:\n");
    scanf("%f", &me);

    ma = (n1 + n2*2 + n3*3 + me)/7;

    printf("\nA nota final é:\n");

    if (ma >= 9){
        printf("\nA\n");
        printf("%f", ma);
        printf("\n");
    }     
    else if (ma >= 7.5 || ma < 9){
        printf("\nB\n");
        printf("%f", ma);
        printf("\n");
    }
    else if (ma >= 6 || ma < 7.5){
        printf("\nC\n");
        printf("%f", ma);
        printf("\n");
    }
    else if (ma >= 4 || ma < 6){
        printf("\nD\n");
        printf("%f", ma);
        printf("\n");
    }
    else {
        printf("\nE\n");
        printf("%f", ma);
        printf("\n");
    }
 
}