#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    float num, x1, x2, e=1.0;

    printf("Digite um numero para encontrar a raiz quadrada: ");
    scanf("%f", &num);

    x1 = num/2;

    while(e > 0.1){

        x2 = x1 - ((x1*x1-num)/(2*x1));
        e = fabs(x2-x1);
        x1 = x2;

    }

    x2 = sqrtf(num);

    printf("\nA raiz obtida com o metodo de aproximacao e: %f\n", x1);
    printf("A raiz obtida com a funcao sqrt e: %f", x2);

}
