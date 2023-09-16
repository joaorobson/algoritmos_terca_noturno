#include <stdio.h>

int main() {
    int i;
    // solução com o dobro de repetições
    /*for(i = 1;i <= 100;i = i + 1){
        if(i%2 == 0){
            printf("%d\n", i);
        }
    } */
    // i += 2 é a mesma coisa de i = i + 2

    for (i = 2; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    return 0;
}