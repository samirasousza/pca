#include <stdio.h>
#include <stdlib.h>

int produtoEscalar (int x[], int y[], int n) {
	int produto, i;
	
	for (i=0; i<n; i++) {
		produto+=x[i]*y[i];
	}
	
	return produto;
}

int main () {
	int n, i;
	
	do{
	printf("Digite a quantidade de numeros da sequencia (max. 100): ");
	scanf("%d", &n);
	
	if(n>100 || n<0)
        printf("Numero Invalido! Informe outro valor:\n");
            
	}while (n>100 || n<0);
	
	int x[n], y[n];
	
	for (i=0; i<n; i++) {
		printf("\nDigite o %d numero do vetor x: ", i+1);
		scanf("%d", &x[i]);
	}
	
	printf("\n");
	
	for (i=0; i<n; i++) {
		printf("\nDigite o %d numero do vetor y: ", i+1);
		scanf("%d", &y[i]);
	}
	
	printf("\nProduto escalar entre os vetores = %d", produtoEscalar(x, y, n));
	
}
