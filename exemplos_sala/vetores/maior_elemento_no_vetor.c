#include <stdio.h>

int main(){
    int vetor[5] = {5, 0, 8, 1, 4};

    int maiorValor = vetor[4];

    for(int i = 0;i < 5;i++){
        if(vetor[i] > maiorValor){
            maiorValor = vetor[i];
        }
    }

    printf("maior valor: %d\n", maiorValor);

    return 0;
}