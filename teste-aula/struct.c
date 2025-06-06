#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    struct Contato{
        int codigo;
        int numero;
        char nome[100];
    };

    int quantidade;
    scanf("%d", &quantidade);
    struct Contato contato[quantidade];

    for(int i = 0; i < quantidade; i++){
        printf("CONTATO %d\n", i+1);
        printf("Digite o codigo:");
        scanf("%d", &contato[i].codigo);
        fflush(stdin);
        printf("Digite o numero:");
        scanf("%d", &contato[i].numero);
        fflush(stdin);
        printf("Digite o nome:");
        fgets(contato[i].nome, sizeof(contato[i].nome), stdin);
        contato[i].nome[strcspn(contato[i].nome, "\n")] = '\0';

    }
    for(int i = 0; i < quantidade; i++){
        printf("CONTATO %d\n", i+1);
        printf("Codigo: %d\n", contato[i].codigo);
        printf("Numero:%d\n", contato[i].numero);
        printf("Nome: %s\n\n", contato[i].nome);


    }


}