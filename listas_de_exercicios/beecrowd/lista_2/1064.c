#include <stdio.h>

int main() {
    float valor, soma = 0;
    int numeroDePositivos = 0;
    

    for(int i = 1;i <= 6;i++){
        scanf("%f", &valor);
        
        if(valor > 0){
            numeroDePositivos++;
            soma = soma + valor;
        }
    }

    printf("%d valores positivos\n", numeroDePositivos);
    printf("%.1f\n", soma/numeroDePositivos);

    return 0;
}