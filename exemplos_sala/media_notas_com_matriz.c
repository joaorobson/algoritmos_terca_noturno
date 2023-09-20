#include <stdio.h>

int main(){
    double notas[2][4];

    // Substitui código da linha 16 a 26
    for(int aluno = 0;aluno <= 1;aluno++){
        printf("Insira as notas do aluno %d:\n", aluno + 1);
        for(int posNota = 0;posNota < 4;posNota++){
            printf("Insira a nota %d: ", posNota + 1);
            scanf("%lf", &notas[aluno][posNota]);
        }
    }


/*  printf("Insira as notas do aluno 1:\n");
    for(int i = 0;i < 4;i++){
        printf("Insira a nota %d: ", i + 1);
        scanf("%lf", &notas[0][i]);
    }

    printf("Insira as notas do aluno 2:\n");
    for(int i = 0;i < 4;i++){
        printf("Insira a nota %d: ", i + 1);
        scanf("%lf", &notas[1][i]);
    } */

    // Substitui o código da linha 36 a 43
    for(int aluno = 0;aluno <= 1;aluno++){
        printf("Notas do aluno %d:\n", aluno + 1);
        for(int posNota = 0;posNota < 4;posNota++){
            printf("Nnota %d: %.lf\n", posNota + 1, notas[aluno][posNota]);
        }
    }

    /* printf("Notas do aluno 1:\n");
    for(int i = 0;i < 4;i++){
        printf("Nota %d: %.1lf\n", i + 1, notas[0][i]);
    }
    printf("Notas do aluno 2:\n");
    for(int i = 0;i < 4;i++){
        printf("Nota %d: %.1lf\n", i + 1, notas[1][i]);
    } */
    return 0;
}