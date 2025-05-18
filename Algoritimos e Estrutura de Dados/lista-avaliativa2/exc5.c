#include <stdio.h>
#include <string.h>

int validarEmail(char email[]){

    size_t posicao = strcspn(email, "@");

    if(email[posicao] == '@'){
        return (int)posicao;
    }else{
        return -1;
    }

}

int main(){

    char email[50];
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    int pos = validarEmail(email);
    if(pos != -1){
        printf("Email valido, @ no index %d", pos);
    }else{
        printf("Email invalido");
    }


}