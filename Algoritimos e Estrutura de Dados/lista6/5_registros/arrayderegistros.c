#include <stdio.h>
#include <stdlib.h>

struct Usuario{
    char nome[10];
    int numero;
};

void lerNomeeNumero(struct Usuario *u, int n){
    for(int i = 0; i < n; i++){
        gets(u[i].nome);
        scanf("%d", &u[i].numero);
        getchar();
    }
    for(int i = 0; i < n; i++){
        printf("Usuario %d:\n", i);
        printf("Nome: %s\n", u[i].nome);
        printf("Numero: %d\n", u[i].numero);
    }
}

int main(){


    int n;
    scanf("%d", &n);
    getchar();

    struct Usuario *usuarios = (struct Usuario*) malloc(n * sizeof(struct Usuario));
    lerNomeeNumero(usuarios, n);

    free(usuarios);

}