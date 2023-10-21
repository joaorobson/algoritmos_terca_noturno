#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};

struct retangulo{
    struct ponto pontoA;
    struct ponto pontoD;
};


float calculaDistanciaEntreDoisPontos(struct ponto ponto1, struct ponto ponto2){
    float distancia = sqrt(pow(ponto1.x - ponto2.x, 2) + 
                           pow(ponto1.y - ponto2.y, 2));
    return distancia;
}


float calculaAreaDoRetangulo(struct retangulo r){
    struct ponto pontoB = {r.pontoA.x, r.pontoD.y};

    float altura = calculaDistanciaEntreDoisPontos(r.pontoA, pontoB);
    float base = calculaDistanciaEntreDoisPontos(r.pontoD, pontoB);

    return base*altura;
}

float calculaDiagonalDoRetangulo(struct retangulo r){
    float diagonal = calculaDistanciaEntreDoisPontos(r.pontoA, r.pontoD);
    return diagonal;
}

float calculaPerimetroDoRetangulo(struct retangulo r){
    struct ponto pontoB = {r.pontoA.x, r.pontoD.y};

    float altura = calculaDistanciaEntreDoisPontos(r.pontoA, pontoB);
    float base = calculaDistanciaEntreDoisPontos(r.pontoD, pontoB);

    return 2*base + 2*altura;
}


int main(){
    struct retangulo ret;

    printf("Insira as coordenadas do ponto A do retangulo:\n");
    printf("coordenada x do ponto A: ");
    scanf("%d", &ret.pontoA.x);
    printf("coordenada y do ponto A: ");
    scanf("%d", &ret.pontoA.y);

    printf("Insira as coordenadas do ponto D do retangulo:\n");
    printf("coordenada x do ponto D: ");
    scanf("%d", &ret.pontoD.x);
    printf("coordenada y do ponto D: ");
    scanf("%d", &ret.pontoD.y);

    printf("comprimento da diagonal do retangulo ret: %f\n", 
            calculaDiagonalDoRetangulo(ret));

    printf("area do retangulo ret: %f\n", 
            calculaAreaDoRetangulo(ret));

    printf("perimetro do retangulo ret: %f\n", 
            calculaPerimetroDoRetangulo(ret));
    return 0;
}