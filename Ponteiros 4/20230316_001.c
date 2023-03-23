#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void maiorMenor(int *vet, int n, int *maior, int *menor){

    *maior = vet[0];
    *menor = vet[0];
	
	int *pvet;
	
    for(pvet = vet; pvet <= vet+n-1; pvet++){
        if (*pvet > *maior){*maior = *pvet;}
        else{if (*pvet < *menor){*menor = *pvet;}}
    }
}

int main(){
    int n, i;
    printf("Digite a quantidade de inteiros:\n");
    scanf("%d", &n);

    int *vet = (int*) malloc(n * sizeof(int));
    
    if(vet == NULL){
        printf("Erro: não foi possível alocar memória");
        return -1;
    }
    else{
    	printf("\nDigite os inteiros:\n");
	
	    for(i = 0; i < n; i++){
	        scanf("%d", vet+i);	
		}
	}

    int maior, menor;

    maiorMenor(vet, n, &maior, &menor);

    free(vet);

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;


}
