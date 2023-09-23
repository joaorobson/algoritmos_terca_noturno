#include <stdio.h>

int main(){
    int valorInicial, vetor[10];

    scanf("%d", &valorInicial);
    vetor[0] = valorInicial;

    // inicializa valores do vetor, armazenando em
    // cada posição 2 x o valor da posição anterior
    for(int posicao = 1;posicao < 10;posicao++){
        vetor[posicao] = 2*vetor[posicao - 1];
    }

    // imprime valores do vetor
    for(int posicao = 0;posicao < 10;posicao++){
        printf("N[%d] = %d\n", posicao, vetor[posicao]);
    }



    return 0;
}