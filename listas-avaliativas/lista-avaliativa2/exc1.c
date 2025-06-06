#include <stdio.h>


int main(){

    float array[5], arrayDobro[5];
    for(int i = 0; i < 5; i++){
        scanf("%f", &array[i]);
        arrayDobro[i] = array[i] * 2;
    }
    for(int i = 0; i < 5; i++){
        printf("%.2f ", array[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("%.2f ", arrayDobro[i]);
    }
}