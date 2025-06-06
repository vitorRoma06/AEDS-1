#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    char senha[50];
    fgets(senha, sizeof(senha), stdin);
    senha[strcspn(senha, "\n")] = '\0';

    int upper = 0, lower = 0, number = 0, carac = strlen(senha), espec = 0;

    for(int i = 0; senha[i] != '\0'; i++){
        if(isupper(senha[i]))
            upper = 1;
        if(islower(senha[i]))
            lower = 1;
        if(isdigit(senha[i]))
            number = 1;
        if(!isalpha(senha[i]) && !isdigit(senha[i]))
            espec = 1;
    }

    if(upper && lower && number && espec && carac >= 8){
        printf("Senha eh valida");
    }else{
        printf("Senha nao eh valida");
    }

    return 0;
}