#include <stdio.h>

int main(){
    int valor1;
    int valor2;
    int resultado;
    char operacao;

    printf("Insira uma operacao:\n");
    scanf("%c", &operacao);

    printf("Insira 2 valores:\n");
    printf("Valor 1:\n");
    scanf("%d", &valor1);
    printf("Valor 2:\n");
    scanf("%d", &valor2);

    if(operacao == '+'){
        resultado = valor1 + valor2;
    } else if(operacao == '-'){
        resultado = valor1 - valor2;
    } else if(operacao == '*'){
        resultado = valor1 * valor2;
    } else if(operacao == '/'){
        resultado = valor1 / valor2;
    } else if(operacao == '%'){
        resultado = valor1 % valor2;
    }
    printf("resultado: %d\n", resultado);
    printf("operacao: %c\n", operacao);

    // SOMA: resultado = valor1 + valor2;
    // SUBTRACAO: resultado = valor1 - valor2;
    // MULTIPLICACAO: resultado = valor1 * valor2;
    // DIVISAO: resultado = valor1 / valor2;
    // RESTO: resultado = valor1 % valor2;
    // INCREMENTO: valor1++;
    // DECREMENTO: valor1--;


    return 0;
}