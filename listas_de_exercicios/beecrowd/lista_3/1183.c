#include <stdio.h>

int main(){
    char operacao;
    double matriz[12][12], soma = 0;
    int colunaInicial = 1;


    scanf("%c", &operacao);

    // insere os valores em cada posição da matriz
    for(int linha = 0;linha < 12;linha++){
        for(int coluna = 0;coluna < 12;coluna++){
            scanf("%lf", &matriz[linha][coluna]);
        }
    }

    for(int linha = 0;linha < 12;linha++){
        for(int coluna = colunaInicial;coluna < 12;coluna++){
            soma = soma + matriz[linha][coluna];
        }
        colunaInicial++;
    }

    // apresenta o resultado da operação
    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    } else if(operacao == 'M'){
        printf("%.1lf\n", soma/66);
    }


    // linha 0 -> somar do 1 ao 11
    // linha 1 -> somar do 2 ao 11
    // linha 2 -> somar do 3 ao 11
    // linha 3 -> somar do 4 ao 11
    // ...
    // linha 10 -> somar do 11 ao 11
    // linha 11 -> somar do 12 ao 11

    return 0;
}