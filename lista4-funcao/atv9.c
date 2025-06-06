#include <stdio.h>

double fatorial(int N);

int main(){

    int num;
    scanf("%d", &num);
    printf("%lf", fatorial(num));
}

double fatorial(int N){

    double fator = 1.0;
    for(int i = 1; i <= N; i++){
        fator *= i;
    }
    return fator;
}
