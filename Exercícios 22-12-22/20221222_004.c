#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, i, primo=0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i=2; i<=num/2; i++){
        if (num%i == 0){
            primo++;
            break;
        }
    }

    if (primo==0){
        printf("%d e primo", num);
    }

    else{
        printf("%d nao e primo", num);
    }

}
