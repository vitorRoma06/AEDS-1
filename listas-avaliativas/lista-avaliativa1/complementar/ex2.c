#include <stdio.h>
#define PI 3.141592

int main(){

    float raio, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = PI * raio*raio;

    printf("Area do circulo: %.2f", area);
}