#include <stdio.h>
#include <stdlib.h>

int main(){
	float maior, menor, prox;
	int i;
	
	printf("Digite 15 números reais: ");
    scanf("%f", &maior);
    scanf("%f", &menor);

    if(maior < menor){
        prox = maior;
        maior = menor;
        menor = prox;
    }

    for (i=0; i<13; i++){
        scanf("%f", &prox);
        if (prox > maior){
            maior = prox;
        }

        else{
            if (prox < menor){
                menor = prox;
            }
        }
    }

    printf("O maior e: %f\nO menor e: %f\n", maior, menor);

}
