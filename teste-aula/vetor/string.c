#include <stdio.h>
#include <string.h>

int main(){

    char nome[] = "Vitor de Roma", nome2[] = "Roma";

    strncpy(nome, nome2, 4);
    printf("%s %s", nome, nome2);
    strncpy(nome, nome2, 4);
    printf("%s %s", nome, nome2);
    
    

    return 0;
}