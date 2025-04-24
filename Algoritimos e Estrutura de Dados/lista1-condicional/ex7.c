#include <stdio.h>

int main()
{
    float peso, altura, imc;
    
    printf("Informe o peso (em kg): ");
    scanf("%f", &peso);
    
    printf("Informe a altura (em metros): ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    if(imc <= 18.5){
        printf("IMC: %.2f - Abaixo do peso", imc);
    }else if(imc >= 18.5 && imc < 25){
        printf("IMC: %.2f - Peso normal", imc);
    }else if(imc >= 25 && imc < 30){
        printf("IMC: %.2f - Sobrepeso", imc);
    }else if(imc >= 30){
        printf("IMC: %.2f - Obesidade", imc);
    }else{
        printf("Valor inválido");
    }
}