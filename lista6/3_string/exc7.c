#include <stdio.h>
#include <string.h>
int main(){

    char string[10];
    gets(string);
    
    for(int i = 0; i < (int)(strlen(string)); i++){
        string[i] -= 32;
    }
    printf("%s", string);
}