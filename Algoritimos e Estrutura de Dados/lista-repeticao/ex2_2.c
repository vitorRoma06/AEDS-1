#include <stdio.h>
#include <math.h>
int main(){

    int n, divisores = 2, countD = 0;
    float raizN;

    printf("Digite o numero:");
    scanf("%d", &n);

    raizN = sqrt(n);
    if(n <= 1){
        printf("Numero nao eh primo");
        return 0;
    }
    while(divisores < raizN){
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

    return 0;
}
