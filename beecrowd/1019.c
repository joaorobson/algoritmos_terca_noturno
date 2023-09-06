#include <stdio.h>

int main(){
    int tempoEmSegundos;
    int numeroDeSegundosEmUmaHora = 3600;
    int numeroDeSegundosEmUmMinuto = 60;
    int numeroDeHorasDentroDoTempo;
    int numeroDeMinutosDentroDoResto;
    int numeroDeSegundos;
    int resto;

    scanf("%d", &tempoEmSegundos); // tempoEmSegundos = 556
    
    numeroDeHorasDentroDoTempo = tempoEmSegundos / numeroDeSegundosEmUmaHora; // numeroDeHorasDentroDoTempo = 0
    resto = tempoEmSegundos % numeroDeSegundosEmUmaHora; // resto = 556

    numeroDeMinutosDentroDoResto = resto / numeroDeSegundosEmUmMinuto; // numeroDeMinutosDentroDoResto = 9
    numeroDeSegundos = resto % numeroDeSegundosEmUmMinuto; // numeroDeSegundos  = 16


    printf("%d:%d:%d\n", numeroDeHorasDentroDoTempo,  numeroDeMinutosDentroDoResto, numeroDeSegundos);



    return 0;
}