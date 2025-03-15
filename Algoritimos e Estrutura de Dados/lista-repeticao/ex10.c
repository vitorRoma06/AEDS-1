#include <stdio.h>

int main(){

     int numD, numB = 0, fator = 1;

     printf("Digite um numero de base 10: ");
     scanf("%d", &numD);

     while(numD > 0){

        numB += (numD%2) * fator;
        numD /= 2;
        fator *= 10;

     }

     printf("Numero binario: %d", numB);

    return 0;

}