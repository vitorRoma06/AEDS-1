#include <stdio.h>

void validarTriangulo(float x, float y, float z){
    if(x < y+z && y < x+z && z < y+x ){
        printf("Tringulo valido.\n");
        if(x == y && x == z)
            printf("Triangulo Equilatero\n");
        if(x != y || x != z || y != z)
            printf("Triangulo Isoceles\n");
        if(x != y && x != z && y != z)
            printf("Triangulo Escaleno\n");
    }else{
        printf("Triangulo Invalido");
    }
}

int main(){

    int a, b, c, n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d", &a, &b, &c);
        validarTriangulo(a, b, c);
    }

}