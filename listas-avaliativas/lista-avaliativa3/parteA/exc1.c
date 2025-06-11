#include <stdio.h>
#include <stdlib.h>

int quantidadeLinhasArq(char path[]){
    int qtdLinhas = 0;
    FILE* fp = fopen(path, "rt");
    if(fp == NULL){
        perror("Detalhes do erro");
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }
    printf("Arquivo aberto com sucesso\n");

    fclose(fp);

    return qtdLinhas;
}
int main(){

    char nomeArquivo[50];
    scanf("%49s", nomeArquivo);
    
    char path[50];
    //Formatação do caminho do arquivo
    snprintf(path, sizeof(path), "../%s", nomeArquivo);
    printf("Caminho do arquivo: %s\n", path);

    quantidadeLinhasArq(path);
    printf("FInal");
    return 0;


}