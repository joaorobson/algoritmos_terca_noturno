#include <stdio.h>

int main(){
    int valorEmReais, numeroDeNotas;

    scanf("%d", &valorEmReais);
    printf("%d\n", valorEmReais);

    // valorEmReais = 576

    numeroDeNotas = valorEmReais / 100; // numeroDeNotas = 5
    valorEmReais = valorEmReais % 100; // valorEmReais = 76
    printf("%d nota(s) de R$ 100,00\n", numeroDeNotas);

    numeroDeNotas = valorEmReais / 50; // numeroDeNotas = 1
    valorEmReais = valorEmReais % 50; // valorEmReais = 26
    printf("%d nota(s) de R$ 50,00\n", numeroDeNotas);

    numeroDeNotas = valorEmReais / 20; // numeroDeNotas = 1
    valorEmReais = valorEmReais % 20; // valorEmReais = 6
    printf("%d nota(s) de R$ 20,00\n", numeroDeNotas);

    numeroDeNotas = valorEmReais / 10; // numeroDeNotas = 0
    valorEmReais = valorEmReais % 10; // valorEmReais = 6
    printf("%d nota(s) de R$ 10,00\n", numeroDeNotas);

    numeroDeNotas = valorEmReais / 5; // numeroDeNotas = 1
    valorEmReais = valorEmReais % 5; // valorEmReais = 1
    printf("%d nota(s) de R$ 5,00\n", numeroDeNotas);

    numeroDeNotas = valorEmReais / 2; // numeroDeNotas = 1
    valorEmReais = valorEmReais % 2; // valorEmReais = 1
    printf("%d nota(s) de R$ 2,00\n", numeroDeNotas);

    numeroDeNotas = valorEmReais / 1; // numeroDeNotas = 1
    printf("%d nota(s) de R$ 1,00\n", numeroDeNotas);

    return 0;
}