#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, maior, menor, soma;
    soma = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b){
        maior = a;
        menor = b;
    } else if(b > a){
        maior = b;
        menor = a;
    } else {
        maior = a;
        menor = a;
    }

    for(int valorAtual = menor + 1;valorAtual < maior;valorAtual++){
        // checando se valorAtual é ímpar
        if(abs(valorAtual)%2 == 1){
            soma = soma + valorAtual;
        }
    }

    printf("%d\n", soma);
    return 0;
}