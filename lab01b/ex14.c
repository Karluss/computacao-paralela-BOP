#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[100] = "ComputacaoParelela";
    int pos = 4;
    char letter = 'W';

    for (int i = strlen(str) + 1; i >= 0; i--) {
        str[i] = str[i-1];
        if (i == pos){
            str[pos] = letter;
            break;
        }
    }
    
    printf("\n%s", str);
    return 0;
}