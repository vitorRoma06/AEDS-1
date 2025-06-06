#include <stdio.h>

int numeroDivisores(int N);

int main(){
    int N, numDivisores;
    scanf("%d", &N);
    numDivisores = numeroDivisores(N);
    printf("%d", numDivisores);
    
}

int numeroDivisores(int N){

    int i, count = 0;
    for(i = 1; i <= N; i++){
        if(N % i == 0)
            count++;
    }
    return count;
}