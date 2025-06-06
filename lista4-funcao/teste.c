#include <stdio.h>

int main(){

    float i = 1, *ponteiro = &i, *p2;
    p2 = ponteiro;

    printf("%f %f", *ponteiro, *p2);

}
