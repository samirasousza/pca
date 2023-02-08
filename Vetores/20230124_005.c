#include <stdio.h>
#include <stdlib.h>

void fatorial (int sequencia[], int n) {
	int i, j, fat;
	
	for (i=0; i<n; i++) {
		for (fat=1; sequencia[i]>1; sequencia[i]--) {
			fat*=sequencia[i];
		}
		printf("%d, ", fat);
	}
}

main () {
	int n, i;
	
	do{
	printf("Digite a quantidade de numeros da sequencia (max. 100): ");
	scanf("%d", &n);
	
	if(n>100 || n<0)
        printf("Numero Invalido! Informe outro valor:\n");
            
	}while (n>100 || n<0);
	
	int sequencia[n];
	
	for (i=0; i<n; i++) {
		printf("\nDigite o %d numero: ", i+1);
		scanf("%d", &sequencia[i]);
	}
	
	fatorial(sequencia, n);

	return 0;
		
}
