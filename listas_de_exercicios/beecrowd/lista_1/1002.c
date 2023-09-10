#include <stdio.h>

int main(){
    double pi = 3.14159;
    double raio;

    scanf("%lf", &raio);
 
    printf("A=%.4lf\n", pi * raio * raio);

    return 0;
}