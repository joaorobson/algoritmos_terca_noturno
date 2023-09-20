#include <stdio.h>

int main(){
    double notas[4], somaDasNotas = 0;
    char nomeAluno[20];

    printf("Insira o nome de um aluno: ");
    // nao recomendado para ler strings.
    // Uso apenas para exemplo
    scanf("%[^\n]s", &nomeAluno);
    printf("Nome do aluno: %s\n", nomeAluno);

    for(int i = 0;i < 4;i++){
        printf("Insira a nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
        somaDasNotas = somaDasNotas + notas[i]; 
    }

    for(int i = 0;i < 4;i++){
        printf("Nota %d: %.1lf\n", i + 1, notas[i]);
    }

    printf("Media final: %lf\n", somaDasNotas/4);
    return 0;
}