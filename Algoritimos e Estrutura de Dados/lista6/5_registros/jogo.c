#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Guerreiro{
    int ataque, defesa, carisma, pontos_vida, id_guerreiro;
};

int rolaDados() {
    return rand() % 6 + 1 + rand() % 6 + 1 + rand() % 6 + 1;
}

void criaGuerreiro(struct Guerreiro *g){
    g->ataque = rolaDados();
    g->carisma = rolaDados();
    g->defesa = rolaDados();
    g->pontos_vida = (3* rolaDados());
}

int bonusCarisma(int carisma){
    if(carisma == 18){
        return 3;
    }else if(carisma == 16 || carisma == 17){
        return 2;
    }else if(carisma == 14 || carisma == 15){
        return 1;
    }else if(carisma == 6 || carisma == 7){
        return 1;
    }else if(carisma == 4 || carisma == 5){
        return 2;
    }else if(carisma == 3){
        return 3;
    }else{
        return 0;
    }
}

void ataca(struct Guerreiro *g1, struct Guerreiro *g2){
    int golpe = g1->ataque + bonusCarisma(g1->carisma) + rolaDados();
    int escudo = g2->defesa + bonusCarisma(g2->carisma) + rolaDados();
    int dano = golpe - escudo;

    if(dano > 0){
        g2->pontos_vida -= dano;
        printf("%d de Dano Causado\n", dano);
        if(g2->pontos_vida <= 0)
            printf("Segundo Guerreiro Morreu\n");
    } else {
        printf("Nenhum dano causado\n");
    }
}


int main(){
    srand(time(NULL));

    struct Guerreiro g1, g2;
    criaGuerreiro(&g1);
    criaGuerreiro(&g2);
    
    printf("Pontos de vida do Guerreiro 2: %d\n", g2.pontos_vida);
    ataca(&g1, &g2);
    printf("Pontos de vida do Guerreiro 2: %d\n\n", g2.pontos_vida);

    printf("Pontos de vida do Guerreiro 1: %d\n", g1.pontos_vida);
    ataca(&g2, &g1);
    
    printf("Pontos de vida do Guerreiro 1: %d\n", g1.pontos_vida);

    return 0;
}