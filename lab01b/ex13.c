#include <stdio.h>

int main() {
    char str[100] = "ComputacaoParalela";
    printf("%s\n", str);
    const int pos = 4;
    memmove(&str[pos], &str[pos + 1], strlen(str) - pos);
    printf("%s\n", str);
}