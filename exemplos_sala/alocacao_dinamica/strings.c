#include <stdio.h>
#include <stdlib.h>

int main(){
    // alocação estática
    char string[20];
    printf("insira uma string: ");
    scanf("%s", string);
    printf("%s\n", string);

    // alocação dinâmica
    char* string_dinamica;
    string_dinamica = (char*) malloc(20);

    printf("insira outra string: ");
    scanf("%s", string_dinamica);
    printf("%s\n", string_dinamica);
    
    return 0;
}