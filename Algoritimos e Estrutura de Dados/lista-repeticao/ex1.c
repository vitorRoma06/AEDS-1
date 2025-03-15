#include <stdio.h>

int main(){

    int num = 0, total = 0;

    while(num >= 0){

        printf("Digite um numero:");
        scanf("%d", &num);
        if(num >= 0){
           total += num;
        }
    }

    printf("Total da soma dos numeros: %d", total);

    return 0;
}
