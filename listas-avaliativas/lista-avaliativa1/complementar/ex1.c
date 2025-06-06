#include <stdio.h>

int main(){

    float kmPorHora, mPorSegundo;

    
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &kmPorHora);
    while(kmPorHora <0){
        printf("Velocidade invalida. Tente novamente: ");
        scanf("%f", &kmPorHora);
    }


    mPorSegundo = kmPorHora/3.6;

    printf("Velocidade em m/s: %.2f", mPorSegundo);
}