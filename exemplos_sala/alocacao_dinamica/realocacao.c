#include <stdio.h>
#include <stdlib.h>

int main(){
    int* vetor = (int*) malloc(5*sizeof(int));
    if(vetor == NULL){
        printf("Nao foi possivel alocar memoria!!!\n");
        return 1;
    }
    printf("preenchendo vetor da posicao 0 a 4...\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    vetor = realloc(vetor, 10*sizeof(int)); // vai mudar tamanho do vetor para 10 posições
    printf("preenchendo vetor da posicao 5 a 9...\n");

    for (int i = 5; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("valores da posicao 0 a 9:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    vetor = realloc(vetor, 3*sizeof(int));
    printf("valores da posicao 0 a 2:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
    return 0;
}