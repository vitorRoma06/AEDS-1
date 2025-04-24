#include <stdio.h>
#include <math.h>

int main(){

    int num, divisor = 2, countDivisores = 0;
    float raizNum;

    printf("Digite um numero: ");
    scanf("%d", &num);

    raizNum = sqrt(num);

    if(num <= 1){
        printf("Numero nao eh primo.");
        return 0;
    }
    for(int i = 1; i < raizNum; i++){
        if(num % divisor == 0){
            countDivisores++;
        }
        divisor++;
    }

    if(countDivisores > 0)
        printf("Numero nao eh primo");

    if(countDivisores == 0)
        printf("Numero eh primo");



}