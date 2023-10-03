#include <stdio.h>



// 0 1 1 2 3 5 8 13... 
int fibo(int pos){
    if(pos == 0){
        return 0;
    } else if(pos == 1){
        return 1;
    } else {
        return fibo(pos - 1) + fibo(pos - 2);
    }
}


int main(){

    printf("10o numero de fibonacci: %d\n", fibo(50));

    return 0;
}