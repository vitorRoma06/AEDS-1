#include <stdio.h>

int somaImpares(int N){
    int soma = 0;
    for(int i = 0; i <= N; i++){
        if(i % 2 != 0)
            soma += i;
    }
    return soma;
}

int main(){

    int num;
    scanf("%d", &num);
    printf("Soma Impares: %d", somaImpares(num));

}
