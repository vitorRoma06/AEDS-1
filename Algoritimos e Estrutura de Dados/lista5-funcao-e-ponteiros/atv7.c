#include <stdio.h>

void compararEndereco(int *a, int *b){
    if(a>b)
        printf("Maior endereco eh A: %p, %p", a, b);
    else
        printf("Maior endereco eh B: %p", b);
}
int main(){

    int a, b;
    scanf("%d%d", &a, &b);
    compararEndereco(&a, &b);
}