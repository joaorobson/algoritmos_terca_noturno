#include <stdio.h>
#include <string.h>

int main(){
    int numEntradas, numPessoas;
    char idioma[21];
    char idiomasLidos[100][21]; // lista de strings com 100 strings

    scanf("%d", &numEntradas);
    
    for(int i = 0;i < numEntradas;i++){
        scanf("%d", &numPessoas);
        for(int pessoa = 0;pessoa < numPessoas;pessoa++){
            scanf("%s", idioma);
            strcpy(idiomasLidos[pessoa], idioma);
        }

        char primeiroIdioma[21];
        int temIdiomasDistintos = 0;
        strcpy(primeiroIdioma, idiomasLidos[0]);
        for(int pessoa = 1;pessoa < numPessoas; pessoa++){
            if(strcmp(idiomasLidos[pessoa], primeiroIdioma) != 0){
                printf("ingles\n");
                temIdiomasDistintos = 1;
                break;
            }
        }

        if(temIdiomasDistintos == 0){
            printf("%s\n", primeiroIdioma);
        }
    }
    return 0;
}