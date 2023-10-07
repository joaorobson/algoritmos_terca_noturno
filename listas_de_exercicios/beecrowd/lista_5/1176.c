#include <stdio.h>

void mostraNumFibo(unsigned long long int* seqFibo, int pos){
    printf("Fib(%d) = %lld\n", pos, seqFibo[pos]);
}

int main(){
    unsigned long long int seqFibo[61];
    
    seqFibo[0] = 0;
    seqFibo[1] = 1;
    for(int pos = 2;pos <= 60;pos++){
        seqFibo[pos] = seqFibo[pos - 1] + seqFibo[pos - 2];
    }
    
    int numEntradas, posicaoNaSeqFibo;
    scanf("%d", &numEntradas);

    for(int i = 0;i < numEntradas;i++){
        scanf("%d", &posicaoNaSeqFibo);
        mostraNumFibo(seqFibo, posicaoNaSeqFibo);
    }


    return 0;
}