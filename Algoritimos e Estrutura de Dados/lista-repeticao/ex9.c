#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int num, escolhido, i = 1;

    num = (rand() % 100) + 1;
    do{

        printf("Adivinhe o numero entre 1 e 100(Tentativa %d: ", i);
        scanf("%d", &escolhido);
        if(escolhido > num){
            printf("Numero eh menor.\n");
        }else if(escolhido < num){
            printf("Numero eh maior.\n");
        }else{
            printf("\nParabens voce adivinhou.");
        }
        i++;


    }while(num != escolhido);
    
    return 0;


}