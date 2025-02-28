#include <stdio.h>

int main(){

    int vtBrancos, vtNulos, vtValidos, somaVotos;
    float porcVtBranco, porcVtNulo, porcVtValido;

    printf("Quantidade de votos validos:");
    scanf("%d", &vtValidos);
    printf("Quantidade de votos nulos:");
    scanf("%d", &vtNulos);
    printf("Quantidade de votos em branco:");
    scanf("%d", &vtBrancos);

    somaVotos = vtValidos + vtNulos + vtBrancos;
    porcVtValido = ((float)vtValidos/somaVotos) * 100.0;
    porcVtNulo = ((float)vtNulos/somaVotos) * 100.0;
    porcVtBranco = ((float)vtBrancos/somaVotos) * 100.0;

    printf("\nPorcentagem de votos:\nValidos: %.1f %% \nBranco %.1f %%\nNulos %.1f %%", porcVtValido, porcVtBranco, porcVtNulo);

    return 0;
}
