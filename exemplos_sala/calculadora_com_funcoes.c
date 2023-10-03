#include <stdio.h>
#include <stdlib.h>

// int a = valor1;
// int b = valor2;
int soma(int a, int b){ // a função soma vai retornar um valor do tipo int
    // implementação
    int soma = a + b;
    return soma;
}

// faz a subtração de a - b
int subtrai(int a, int b){
    return a - b;
}

// tipo void usado para funções que não tem retorno
void aplicaOperacao(char operacao, int valor1, int valor2){
    int resultado;
    if(operacao == '+'){
        resultado = soma(valor1, valor2);
        printf("resultado: %d\n", resultado);
    } else if(operacao == '-'){
        resultado = subtrai(valor1, valor2);
        printf("resultado: %d\n", resultado);
    }
}


// código em C sempre começa pela main
int main(){

    char operacao;
    printf("Insira uma operacao:\n");
    scanf("%c", &operacao);

    int valor1, valor2, resultado;
    printf("Insira 2 valores:\n");
    printf("Valor 1:\n");
    scanf("%d", &valor1);
    printf("Valor 2:\n");
    scanf("%d", &valor2);

    aplicaOperacao(operacao, valor1, valor2);
    
    return 0;
}