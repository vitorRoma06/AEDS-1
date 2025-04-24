#include <stdio.h>
#include <string.h>


int main(){

    char login[50], senha[50];
    printf("Login: ");
    scanf("%s", login);
    printf("Senha: ");
    scanf("%s", senha);

    if(strcmp(login,"admin") == 0 && strcmp(senha,"1234") == 0){
        printf("Acesso permitido");
    }else{
        printf("Acesso negado");
    }
}