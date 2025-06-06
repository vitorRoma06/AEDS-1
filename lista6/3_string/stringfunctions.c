#include <stdio.h>
#include <string.h>

int main(){

    char nome[30], nome2[30];
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    strncpy(nome, nome2, 2);
    if(strncmp(nome, nome2, 3) == 0){
        printf("Iguais\n");
    }else{
        printf("Diferentes\n");
    }
    printf("%s", nome);


    return 0;
}