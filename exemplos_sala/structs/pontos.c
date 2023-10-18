#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};

int main(){
    struct ponto p1, p2;

    printf("insira as coordenadas do ponto p1:\n");
    printf("coordenada x de p1: ");
    scanf("%d", &p1.x);
    printf("coordenada y de p1: ");
    scanf("%d", &p1.y);

    printf("insira as coordenadas do ponto p2:\n");
    printf("coordenada x de p2: ");
    scanf("%d", &p2.x);
    printf("coordenada y de p2: ");
    scanf("%d", &p2.y);

    printf("distancia entre p1 e p2: %f\n", sqrt(pow(p1.x - p2.x, 2) + pow(p1.y-p2.y, 2)));

    return 0;
}