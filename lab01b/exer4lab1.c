#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void ordenar();

int main()
{
    char name_one[30], name_two[30];
    printf("Digite o primeiro nome:\n");
    gets(name_one);

    printf("Digite o segundo nome:\n");
    gets(name_two);

    ordenar(name_one, name_two);

    return 0;
}

void ordenar (char a[30], char b[30])
{
    if (strcmp(a,b) < 0)
    {
        printf ("A ordem é:\n %s.\n %s.\n", a, b);
    }
    else
    {
        printf ("A ordem é:\n %s.\n %s.\n", b, a);
    }
}
