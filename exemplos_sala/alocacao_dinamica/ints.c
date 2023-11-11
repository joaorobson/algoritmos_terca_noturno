#include <stdio.h>
#include <stdlib.h>

int main(){
    // alocação estática
/*     int vetor_estatico[5];

    printf("preenchendo vetor estatico...\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor_estatico[i]);
    }
 */
    // alocação dinâmica
    int* vetor_dinamico;
    vetor_dinamico = (int*) malloc(5*sizeof(int)); // 5 x tamanho de cada item (4 bytes)
    if(vetor_dinamico == NULL){
        printf("Nao foi possivel alocar memoria!!!\n");
        return 1;
    }

    int* vetor_dinamico_2;
    vetor_dinamico_2 = (int*) calloc(5, sizeof(int)); // 5 x tamanho de cada item (4 bytes)
    if(vetor_dinamico_2 == NULL){
        printf("Nao foi possivel alocar memoria!!!\n");
        return 1;
    }

    /* printf("preenchendo vetor dinamico...\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &vetor_dinamico[i]);
    } */
    
    printf("valores iniciais do vetor com malloc:\n");
    for (int i = 0; i < 5; i++)
    {
        //printf("vetor_estatico[%d] = %d\n", i, vetor_estatico[i]);
        printf("vetor_dinamico[%d] = %d\n", i, vetor_dinamico[i]);

    }

    printf("valores iniciais do vetor com calloc:\n");

    for (int i = 0; i < 5; i++)
    {
        //printf("vetor_estatico[%d] = %d\n", i, vetor_estatico[i]);
        printf("vetor_dinamico_2[%d] = %d\n", i, vetor_dinamico_2[i]);

    }
    return 0;
}