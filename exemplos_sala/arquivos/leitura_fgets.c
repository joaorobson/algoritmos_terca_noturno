#include <stdio.h>

int main(){
    FILE* f;
    char texto[30];
    f = fopen("dados.txt", "r");

    if(f == NULL){
        printf("erro na abertura do arquivo!!!\n");
        return 1;
    }
    
    int linha = 1;
    while(1){
        int* result = fgets(texto, 20, f);
        printf("result: %p\n", result);
        if(result == NULL){
            printf("fim do arquivo!!!\n");
            break;
        }
        printf("linha %d: %s", linha, texto);
        linha++;
    }

    fclose(f);
    return 0;
}