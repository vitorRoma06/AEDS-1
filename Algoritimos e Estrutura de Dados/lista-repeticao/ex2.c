#include <stdio.h>
#include <math.h>
int main(){

    int n, divisores = 2, countD = 0;
    printf("Digite o numero:");
    scanf("%d", &n);

    if(n <= 1){
        printf("Numero nao eh primo");
        return 0;
    }
    if(n == 2){
        printf("Numero eh primo");
        return 0;
    }
    while(divisores < n){
        if(n % divisores == 0){
            countD++;
        }
        divisores++;
    }
    if(countD > 0){
        printf("Nao eh primo");
    }else{
        printf("Eh primo");
    }
}
