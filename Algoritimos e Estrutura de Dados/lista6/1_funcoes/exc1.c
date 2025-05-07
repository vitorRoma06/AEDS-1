#include <stdio.h>

float calcularProdutoEscalar(float *u, float *v, int n){
    float produtoEscalar = 0.0;
    for(int i = 0; i < n; i++){
        produtoEscalar += u[i] * v[i];
    }
    return produtoEscalar;

}

int main(){

    int n;
    scanf("%d", &n);
    float u[n], v[n];
    for(int i = 0; i < n; i++){
        u[i] = i+1;
        v[i] = i+1;
    }
    printf("%f", calcularProdutoEscalar(u, v, n));
    
}
