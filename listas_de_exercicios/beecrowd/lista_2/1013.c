#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c); // pro scanf, espaço ou enter ("\n") é a mesma coisa

    maior = (a + b + abs(a-b))/2; // maior entre a e b
    maior = (maior + c + abs(maior - c))/2;

    printf("%d eh o maior\n", maior);

    return 0;
}