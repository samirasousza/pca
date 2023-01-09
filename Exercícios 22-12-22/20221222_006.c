#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i, aux=0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (i=1; i<num; i++){
        if (num%i == 0){
            aux = aux + i;
        }
    }

    if (aux==num){
        printf("\n%d e um numero perfeito\n", num);
    }

    else{
        printf("\n%d nao e um numero perfeito\n", num);
    }
}
