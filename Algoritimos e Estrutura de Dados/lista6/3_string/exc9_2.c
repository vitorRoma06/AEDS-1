#include <stdio.h>
#include <stdlib.h>

int main(){

    char texto[20];
    char c;
    int i = 0;

    while((c = getc(stdin)) != '.' && i < 19){
        texto[i] = c;
        i++;
    }
    texto[i] = '\0';

    for(int j = i - 1; j >= 0; j--){
        printf("%c", texto[j]);
    }
}