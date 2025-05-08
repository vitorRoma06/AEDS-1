#include <stdio.h>
#include <string.h>

int main(){

    char string[10], stringI[10];
    scanf("%s", string);
    int tam = strlen(string);

    int i, j;
    for(i = tam - 1, j = 0; i >= 0 && j < tam; i--, j++){
        stringI[j] = string[i];
    }
    stringI[j] = '\0';

    printf("%s", stringI);
}