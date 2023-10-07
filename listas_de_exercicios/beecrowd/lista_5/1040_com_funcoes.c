#include <stdio.h>


float calculaMediaInicial(float* notas, float* pesos){
    float somaNotas = 0, somaPesos = 0;

    // soma ponderada das notas
    for(int i = 0;i < 4;i++){
        // soma = soma + notas[i]*pesos[i];
        somaNotas += notas[i]*pesos[i];

        // soma pesos (denominador da média) para calcular média
        somaPesos += pesos[i];
    }

    float mediaInicial = somaNotas/somaPesos;
    return mediaInicial;
}

void checaSituacaoAluno(float media, float notaMinAprovado, float notaMaxReprovado){
    if(media >= notaMinAprovado){
        printf("Aluno aprovado.\n");
    } else if(media <= notaMaxReprovado){
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
    }
}



int main(){
    float notas[4];
    float pesos[4] = {2, 3, 4, 1}; // declara e inicializa vetor de pesos
    // leitura das notas
    for(int i = 0;i < 4;i++){
        scanf("%f", &notas[i]);
    }
    
    float mediaInicial = calculaMediaInicial(notas, pesos);
    printf("Media: %.1f\n", mediaInicial);

    checaSituacaoAluno(mediaInicial, 7.0, 4.9);    
    if (mediaInicial >= 5 && mediaInicial <= 6.9){ // caso o aluno tenha  5 <= mediaInicial <= 6.9, fica em exame
        float notaExame;
        scanf("%f", &notaExame);
        printf("Nota do exame: %.1f\n", notaExame);
        float mediaFinal = (notaExame + mediaInicial)/2;
        checaSituacaoAluno(mediaFinal, 5.0, 4.9);    
        printf("Media final: %.1f\n", mediaFinal);
    }

    return 0;
}