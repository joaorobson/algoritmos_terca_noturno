#include <stdio.h>

int main(){

    int matriz[3][3];

    // inicalizando primeira linha
    matriz[0][0] = 4;
    matriz[0][1] = 5;
    matriz[0][2] = 8;

    // inicializando segunda linha
    matriz[1][0] = 7;
    matriz[1][1] = 1;
    matriz[1][2] = 3;

    // inicializando terceira linha
    matriz[2][0] = 2;
    matriz[2][1] = 9;
    matriz[2][2] = 6;

    // 1 2
    // 3 4
    for(int linha = 0;linha <= 2;linha++){
        printf("Imprimindo linha %d...\n", linha);
        for(int coluna = 0;coluna <= 2;coluna++){
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }

    
    return 0;
}