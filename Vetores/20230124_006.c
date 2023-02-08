#include <stdio.h>
#include <stdlib.h>

void selectionSort (int vetor[], int n) {
	int menor, i, j, aux, index;
	
	for (i=0; i<n; i ++) {
		menor = i;
		for (j=i+1; j<n; i++) {
			if (vetor[j]<vetor[menor]) {
				menor=j;
			}
		}
		aux=vetor[i];
		vetor[i]=vetor[menor];
		vetor[menor]=aux;
	}	
}

int main () {
	int n, i;
	
	do{
	printf("Digite a quantidade de numeros da sequencia (max. 100): ");
	scanf("%d", &n);
	
	if(n>100 || n<0)
        printf("Numero Invalido! Informe outro valor:\n");
            
	}while (n>100 || n<0);
	
	int vetor[n];
	
	for (i=0; i<n; i++) {
		printf("\nDigite o %d numero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	selectionSort(vetor, n);
	
	for (i=0; i<n; i++) {
		printf("%d, ", vetor[i]);
	}

	return 0;
}
