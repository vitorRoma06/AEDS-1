#include <stdio.h>

int main(){

     int num, numC = 0;

     printf("Digite um numero: ");
     scanf("%d", &num);

     while(num > 0){

        numC = numC * 10 + (num%10);
        num /= 10;
     }
     printf("Numero ao contrario: %d", numC);

    return 0;

}