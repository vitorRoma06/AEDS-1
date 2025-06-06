#include <stdio.h>

int main(){

    float altura, PI;
    char sexo;

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    
    

    if(sexo == 'M' || sexo == 'm'){
        PI = (72.7 * altura) - 58;
        printf("Peso ideal PI: %.2f", PI);
    }else if(sexo == 'F' || sexo == 'f'){
        PI = (62.1 * altura) - 44.7;
        printf("Peso ideal PI: %.2f", PI);
    }else{
        printf("Sexo inválido");
    }

    return 0;
}