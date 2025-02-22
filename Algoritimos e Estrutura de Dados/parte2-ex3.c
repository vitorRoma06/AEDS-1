#include <stdio.h>

int main() {
    int num, numInverso, c, d, u;
    printf("Digite um numero inteiro de 3 digitos: ");
    scanf("%d", &num);

    c = num / 100;
    d = ((num % 100) / 10) * 10;
    u = (num % 10) * 100;

    numInverso = u + d + c;
    printf("O numero invertido eh: %d", numInverso);


    
}