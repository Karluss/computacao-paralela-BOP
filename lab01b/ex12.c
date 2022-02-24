#include <stdio.h>

int searchChar(const char* str, char query) {
    const char* temp = str;
    while (*temp != 0 && *temp != query) temp++;
    return *temp == 0 ? -1 : temp - str;
}

int main() {
    const char* str = "Computacao-Paralela";
    int query = 't';
    int posicao = searchChar(str, query);
    printf("%d\n", posicao);
    return 0;
}