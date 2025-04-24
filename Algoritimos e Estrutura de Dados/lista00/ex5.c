#include <stdio.h>

int main(){

    float valor, taxaJuros, valorTotalAcumulado, jurosRendidos;
    int numMeses;

    printf("Digite valor investido:");
    scanf("%f", &valor);
    printf("Digite a taxa de juros:");
    scanf("%f", &taxaJuros);
    printf("Numero de meses investidos:");
    scanf("%d", &numMeses);

    valorTotalAcumulado = valor * pow((1 + taxaJuros), (float)numMeses);
    jurosRendidos = valorTotalAcumulado - valor;

    printf("%.2f\n", valorTotalAcumulado);
    printf("%.2f", jurosRendidos);

    return 0;
}
