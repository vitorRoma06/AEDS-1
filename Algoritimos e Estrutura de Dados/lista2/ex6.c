#include <stdio.h>

int main()
{
    int ladoA, ladoB, ladoC;
    printf("Informe os tres lados do triangulo: ");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

    if((ladoA + ladoB) > ladoC){
        if(ladoA == ladoB && ladoA == ladoC && ladoB == ladoC){
            printf("Triangulo Equilatero\n");
        }else if((ladoA == ladoB && ladoA != ladoC) || (ladoB == ladoC && ladoB != ladoA) || (ladoA == ladoC && ladoA != ladoB)){
            printf("Triangulo Isosceles\n");
        }else{
            printf("Triangulo Escaleno\n");
        }
    }else{
        printf("Os lados fornecidos nao formam um triangulo valido\n");
    }
}