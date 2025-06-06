#include <stdio.h>

int main(){

    int num1, num2;
    printf("Informe dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    if(num1 >  num2){
        printf("%d e maior que %d\n", num1, num2);
    }else if(num1 < num2){
        printf("%d e maior que %d\n", num2, num1);
    }else if(num1 == num2){
        printf("%d e %d sao iguais\n", num1, num2);
    }else{
        printf("Os valores informados não são inteiros\n");
    }
}