#include <stdio.h>

int main(){
    FILE* f;
    // se arquivo não existe, modos "a" e "w"
    // criam arquivo
    f = fopen("dados.txt", "a");

    if(f == NULL){
        printf("erro na abertura do arquivo!!!\n");
        return 1;
    }
    
    fclose(f);
    return 0;
}