#include <stdio.h>

int main(){
    
    // primeira forma de inicializar vetores
    /* int vetor[4];
    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;
    vetor[3] = 4; */

    // segunda forma de inicializar, passando todos os valores de uma vez
    // int vetor[4] = {1, 2, 3, 4};

    // terceira forma de inicializar

    int vetor[4];

    // nao façam isso! 
    // Apesar de rodar, pode ser perigoso, então não é recomendado!
    /* vetor[-1] = 500;
    vetor[10] = 100;
    printf("valor da posicao -1: %d\n", vetor[-1]);
    printf("valor da posicao 10: %d\n", vetor[10]); */

    for(int i = 0;i < 4;i++){
        printf("Insira um valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Valor da posicao 0: %d\n", vetor[0]);
    printf("Valor da posicao 1: %d\n", vetor[1]);
    printf("Valor da posicao 2: %d\n", vetor[2]);
    printf("Valor da posicao 3: %d\n", vetor[3]);

    return 0;
}