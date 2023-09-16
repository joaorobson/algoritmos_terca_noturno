#include <stdio.h>

int main() {
    int valor;

    scanf("%d", &valor);

    for(int i = 1;i <= 10;i++){
        printf("%d x %d = %d\n", i, valor, i * valor);
    }

    return 0;
}