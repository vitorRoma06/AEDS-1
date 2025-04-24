#include <stdio.h>

float calcularSoma(int n){
    float soma = 0.0;
    for(int i = 1; i<= n; i++){
        soma += ((i*i)+1.0)/(i+3.0);
    }
    return soma;
}

int main(){

    int num;
    scanf("%d", &num);
    printf("%f", calcularSoma(num));
}