#include <stdio.h>

int main(){
    int valor1;
    int valor2;
    char operacao;

    printf("Insira uma operacao:\n");
    scanf("%c", &operacao);

    printf("Insira 2 valores:\n");
    printf("Valor 1:\n");
    scanf("%d", &valor1);
    printf("Valor 2:\n");
    scanf("%d", &valor2);
    printf("operacao: %c\n", operacao);

    if(operacao == '+'){
        printf("resultado: %d\n", valor1 + valor2);
    } else if(operacao == '-'){
        printf("resultado: %d\n", valor1 - valor2);
    } else if(operacao == '*'){
        printf("resultado: %d\n", valor1 * valor2);
    } else if(operacao == '/'){
        printf("resultado: %d\n", valor1 / valor2);
    } else if(operacao == '%'){
        printf("resultado: %d\n", valor1 % valor2);
    } else if(operacao == 'c' && valor1 > valor2){
        printf("%d e maior que %d\n", valor1, valor2);
    } else if(operacao == 'c' && valor1 < valor2){
        printf("%d e menor que %d\n", valor1, valor2);
    } else if(operacao == 'c' && valor1 == valor2){
        printf("%d e igual a   %d\n", valor1, valor2);
    } else {
        printf("OPERACAO INVALIDA!!!\n");
    }
    

    // SOMA: resultado = valor1 + valor2;
    // SUBTRACAO: resultado = valor1 - valor2;
    // MULTIPLICACAO: resultado = valor1 * valor2;
    // DIVISAO: resultado = valor1 / valor2;
    // RESTO: resultado = valor1 % valor2;
    // INCREMENTO: valor1++;
    // DECREMENTO: valor1--;


    return 0;
}