#include <stdio.h>
#include <string.h>
int main(){
/*     // primeira forma de inicializar strings
    // não muito utilizada
    char nome[10] = {'j', 'o', 'a', 'o', '\0'};
    printf("nome: %s\n", nome);

    // segunda forma de inicializar strings
    char nome2[10] = "jose m.";
    printf("nome2: %s\n", nome2);

    // editar string
    printf("mudando 'nome' para \"duda\"...\n");
    nome[0] = 'd';
    nome[1] = 'u';
    nome[2] = 'd';
    nome[3] = 'a';

    printf("nome editado: %s\n", nome);

    // transformar "jose m." pra joana"
    nome2[2] = 'a';
    nome2[3] = 'n';
    nome2[4] = 'a';
    nome2[5] = '\0';

    printf("nome2 editado: %s\n", nome2);


    // lendo uma string com a gets
    // não recomendado usar a função gets
    // 1º motivo: não limita o tamanho do texto lido
    // 2% motivo: não lê o \n ao fim da entrada
    char time[30];
    printf("Insira um time: ");
    gets(time);

    printf("time lido com 'gets': %s", time);
    printf("-----> depois de imprimir texto lido pela gets\n"); */
    
    // lendo uma string com a fgets
    //char matricula[30];
    //printf("Insira uma matricula: ");
    //fgets(matricula, 30, stdin);
   // fputs("matricula lida com 'fgets': ", stdout);
    //fputs(matricula, stdout);
    //printf("-----> depois de imprimir texto lido pela fgets\n");

    

    // manipulação de strings
    // tamanho de uma string

    //printf("tamanho da matricula lida: %d\n", strlen(matricula));

    // copiar string para outra
    // atentar para o tamanho da string que recebe o valor
    /*  EXEMPLO USANDO SENHAS   
        char senha[4] = "1a2d";
        char copiaSenha[4];

        printf("senha cadastrada: %s", senha);
        senha = copiaSenha; -> não permitido

        strcpy(copiaSenha, senha);
         */


        // concatenar strings
        char a[10] = "bom ";
        char b[10] = "dia";

        // a vai virar "bom dia"
        // atentar para o tamanho da string que recebe o valor

        //strcat(a, b);

        //printf("valor de a: %s\n", a);

        // comparar strings

        char string1[10] = "tiago";
        char string2[10] = "maria";

        if(strcmp(string1, string2) == 0){
            printf("%s eh igual a %s\n", string1, string2);
        } else if(strcmp(string1, string2) < 0){
            printf("%s vem antes de %s alfabeticamente\n", string1, string2);
        } else if(strcmp(string1, string2) > 0){
            printf("%s vem depois de %s alfabeticamente\n", string1, string2);
        }
    return 0;
}