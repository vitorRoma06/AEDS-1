#include <stdio.h>

double fatorial(int N){

    double fator;
    for(int i = 1; i <= N; i++){
        fator *= i;
    }
    return fator;
}

int main(){

    int num;
    scanf("%d", &num);
    printf("%lf", fatorial(num));
}
