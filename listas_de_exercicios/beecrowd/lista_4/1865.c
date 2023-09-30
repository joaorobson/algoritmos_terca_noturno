#include <stdio.h>
#include <string.h>

int main(){
    int numEntradas, forca;
    char heroi[100];
    scanf("%d", &numEntradas);

    for(int i = 0;i < numEntradas;i++){
        scanf("%s", heroi); // strings não precisam de "&" no scanf
        scanf("%d", &forca);
        
        if(strcmp(heroi, "Thor") == 0){
            printf("Y\n");
        } else {
            printf("N\n");
        }

    }

    return 0;
}