#include <stdio.h>

int main(){

    int numFIbo = 1, numFIboA, count = 1, nums;

    printf("Quantos numeros FIbonacci:");
    scanf("%d", &nums);

    printf("%d", numFIbo);

    while(count <= nums){

        numFIboA = numFIbo - 1;
        numFIbo = numFIbo + numFIboA;

        printf("%d ", numFIbo);
        count++;
    }
}