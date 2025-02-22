#include <stdio.h>

int main(){

    float altura, peso, imc;
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);
    printf("Digite o peso (em quilogramas): ");
    scanf("%f", &peso);
    imc = peso / (altura * altura);
    printf("Seu IMC e %.2f\n", imc);
}