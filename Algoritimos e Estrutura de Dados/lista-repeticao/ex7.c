#include <stdio.h>

int main(){

    int numFIbo = 1, numFIboA = 0, count = 1, nums;

    printf("Quantos numeros FIbonacci:");
    scanf("%d", &nums);
    

    while(count <= nums){

        printf("%d ", numFIbo);

        numFIbo += numFIboA;
        numFIboA = numFIbo - numFIboA;

        count++;
    }
    return 0;
}