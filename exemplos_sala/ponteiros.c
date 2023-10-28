#include <stdio.h>

void incrementarVariavel(int* a){
    printf("endereco de c dentro da funcao: %p\n", a);
    *a = 10000;
}

int main(){
    int *p, *p1; // declarando ponteiro para variável do tipo int
    int c = 5;
    incrementarVariavel(&c);


    p = &c;

    printf("valor de c: %d\n", c);
    printf("endereco de c na main: %p\n", &c);
    //printf("valor de p: %p\n", p);
    //printf("valor de c a partir de p: %d\n", *p);
    // alterando valor de c usando ponteiro p
   /*  *p = 10; // == c = 10;
    printf("valor de c: %d\n", c);
    printf("valor de c a partir de p: %d\n", *p);

    p1 = p;

    printf("valor de p1: %p\n", p1);
    printf("valor de c a partir de p1: %d\n", *p1);
 */
    return 0;
}