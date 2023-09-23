#include <stdio.h>

int main(){
    int linhaOperacao;
    char operacao;
    double matriz[12][12], soma = 0;


    scanf("%d", &linhaOperacao);
    scanf(" %c", &operacao);

    // para cada linha
    for(int linha = 0;linha < 12;linha++){
        // para cada coluna
        for(int coluna = 0;coluna < 12;coluna++){
            // lê e salva valor na posição da matriz
            scanf("%lf", &matriz[linha][coluna]);
        }
    }

    // para linha lida inicialmente,
    // calcula soma dos valores da linha
    for(int coluna = 0;coluna < 12;coluna++){
        soma = soma + matriz[linhaOperacao][coluna];
    }

    if(operacao == 'S'){
        printf("%.1lf\n", soma);
    } else if(operacao == 'M'){
        printf("%.1lf\n", soma/12);
    }

  
    return 0;
}