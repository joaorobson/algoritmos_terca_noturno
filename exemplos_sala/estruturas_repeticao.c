#include <stdio.h>

int main(){

    int i = 1;
    int nota;

    // lê uma nota pelo menos uma vez. Se for negativa, repete a leitura
    do{
        printf("Insira uma nota positiva!\n");
        scanf("%d", &nota);
    } while(nota < 0);

    // mesmo funcionamento que o do while, mas com mais linhas
    printf("Insira uma nota positiva!\n");
    scanf("%d", &nota);
    while(nota < 0){
        printf("Insira uma nota positiva!\n");
        scanf("%d", &nota);
    }

    // imprime o valor de i 3 vezes
    int i;
    for(i = 1; i <= 3;i = i + 1){
        printf("Valor de i: %d\n", i);
    }

    return 0;
}