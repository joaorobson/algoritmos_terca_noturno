#include <stdio.h>

struct endereco {
    char cidade[50];
    char estado[3];
};


typedef struct aluno {
    char nome[50];
    int matricula;
    float nota;
    struct endereco endereco;
} Aluno;

typedef int inteiro;

inteiro main(){
    Aluno a1;

    // podemos inicializar uma struct diretamente na declaração também
    // struct aluno a2 = {"maria", 10101, 7};


    // posso ter listas de structs também
    /* struct aluno alunos[3];
    alunos[0].matricula = 1010101;
    alunos[0].nota = 7.8;


    struct aluno a3;
    a3 = a2; // posso fazer atribuição direta com structs
    */

    printf("Insira dados do aluno 1:\n");
    printf("nome: ");
    fgets(a1.nome, 50, stdin); // faz a leitura do nome e permite a existência de espaços
    printf("matricula: ");
    scanf("%d", &a1.matricula);
    printf("nota: ");
    scanf("%f", &a1.nota);
    printf("endereco:\n");
    printf("cidade: ");
    fflush(stdin);
    fgets(a1.endereco.cidade, 50, stdin);
    printf("estado: ");
    fflush(stdin);
    fgets(a1.endereco.estado, 3, stdin);

    printf("Informacoes do aluno 1:\n");
    printf("nome: %s", a1.nome);
    printf("matricula: %d\n", a1.matricula);
    printf("nota: %f\n", a1.nota);
    printf("cidade: %s", a1.endereco.cidade);
    printf("estado: %s", a1.endereco.estado);

    /* printf("=====================================\n");

    printf("Informacoes do aluno 2:\n");
    printf("nome: %s\n", a2.nome);
    printf("matricula: %d\n", a2.matricula);
    printf("nota: %f\n", a2.nota);
    printf("=====================================\n");

    printf("Informacoes do aluno 3:\n");
    printf("nome: %s\n", a3.nome);
    printf("matricula: %d\n", a3.matricula);
    printf("nota: %f\n", a3.nota); */
    return 0;
}