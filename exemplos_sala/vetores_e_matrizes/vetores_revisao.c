#include <stdio.h>

int main(){
    int notas[5];
  /*   notas[0] = 1;
    notas[1] = 2;
    ...
    notas[99] = 100; */


    // preenche o vetor com valores vindos do scanf
    for(int i = 0;i < 5;i++){
        scanf("%d", &notas[i]);
    }

    // imprime o valor de cada posição
    for(int i = 0;i < 5;i++){
        printf("posicao %d: %d\n", i, notas[i]);
    }
    return 0;
}