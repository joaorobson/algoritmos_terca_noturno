#include <stdio.h>
#include <string.h>

int main(){
    int numEntradas;
    char nome1[100], nome2[100], escolha1[6], escolha2[6];
    int numEscolhido1, numEscolhido2;

    scanf("%d", &numEntradas);
    
    for(int i = 0;i < numEntradas;i++){
        scanf("%s", nome1);
        scanf("%s", escolha1);
        scanf("%s", nome2);
        scanf("%s", escolha2);
        scanf("%d", &numEscolhido1);
        scanf("%d", &numEscolhido2);

        if((strcmp(escolha1, "PAR") == 0 && 
           (numEscolhido1 + numEscolhido2)%2 == 0) ||
           (strcmp(escolha1, "IMPAR") == 0 && 
           (numEscolhido1 + numEscolhido2)%2 == 1)
        ){
            printf("%s\n", nome1);
        } else { 
            printf("%s\n", nome2); 
        }

        // Código funcional, mas com mais "ifs"
        /* if((numEscolhido1 + numEscolhido2)%2 == 0){ // checa se soma dos números é par
            if(strcmp(escolha1, "PAR") == 0){ // se a escolha da 1ª pessoa for par
                printf("%s\n", nome1); // primeira pessoa ganha
            } else {
                printf("%s\n", nome2); // segunda pessoa ganha
            }
        } else { // a soma deu ímpar
            if(strcmp(escolha1, "IMPAR") == 0){ // se a escolha da 1ª pessoa for par
                printf("%s\n", nome1); // primeira pessoa ganha
            } else {
                printf("%s\n", nome2); // segunda pessoa ganha
            }
        } */
    }


    return 0;
}