#include <stdio.h>

int main(){
    int chaCerto, chaResposta, respostasCertas;
    respostasCertas = 0;

    scanf("%d", &chaCerto);

    for(int i = 0;i < 5;i++){
        scanf("%d", &chaResposta);
        if(chaResposta == chaCerto){
            respostasCertas++;
        }
    }
    printf("%d\n", respostasCertas);
    return 0;
}