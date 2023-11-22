#include <stdio.h>

int main(){
    FILE* f;
    // se arquivo não existe, modos "a" e "w"
    // criam arquivo
    f = fopen("dados.txt", "w");

    if(f == NULL){
        printf("erro na abertura do arquivo!!!\n");
        return 1;
    }
    
    fputs("lista de compras:\n", f);
    fputs("arroz: 2\n", f);
    fputs("feijão: 1\n", f);
    fputs("óleo: 1\n", f);
    fputs("chocolate: 1\n", f);
    fputs("leite: 3\n", f);


    // imprimindo no terminal
    fputs("lista de compras:\n", stdout);
    fputs("arroz: 2\n", stdout);
    fputs("feijao: 1\n", stdout);
    fputs("oleo: 1\n", stdout);
    fputs("chocolate: 1\n", stdout);
    fputs("leite: 3\n", stdout);
    fclose(f);
    return 0;
}