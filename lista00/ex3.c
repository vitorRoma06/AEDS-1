#include <stdio.h>

int main(){
    float A, B, aux;
    printf("Digite o valor de A:");
    scanf("%f", &A);
    printf("Digite o valor de B:");
    scanf("%f", &B);

    aux = A;
    A = B;
    B = aux;

    printf("Valores trocados: A = %.1f B = %.1f", A, B);

    return 0;
}
