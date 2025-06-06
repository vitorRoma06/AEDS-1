#include <stdio.h>

int fatorial(int n){
    int fatorialV = 1;
    for(int i = 1; i <= n; i++){
        fatorialV *= i;
    }
    return fatorialV;
}
float calcularE(int n){
    float E = 1.0;
    for(int i = 1; i <= n; i++){
        E += 1.0/fatorial(i);
    }
    return E;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("E = %f", calcularE(n));
}
