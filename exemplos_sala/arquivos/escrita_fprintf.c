#include <stdio.h>

int main(){
    FILE* f;
    // se arquivo não existe, modos "a" e "w"
    // criam arquivo
    f = fopen("dados.txt", "w");
    char nome[30] = "joao";
    int idade = 25;
    char matricula[20] = "101010";
    float nota = 7.0;

    if(f == NULL){
        printf("erro na abertura do arquivo!!!\n");
        return 1;
    }
    
    fprintf(f, "nome: %s\n", nome);
    fprintf(f, "idade: %d\n", idade);
    fprintf(f, "matricula: %s\n", matricula);
    fprintf(f, "nota: %f\n", nota);

    fclose(f);
    return 0;
}