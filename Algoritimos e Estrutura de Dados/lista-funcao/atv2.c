#include <stdio.h>
#define PI 3.141592

float areaCirculo(float raio){
    return PI * (raio*raio);

}

int main(){

    float raio;
    scanf("%f", &raio);
    printf("%.2f", areaCirculo(raio));
}
