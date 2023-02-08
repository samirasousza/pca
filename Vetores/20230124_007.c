#include <stdio.h>
#include <stdlib.h>

void ocorrencias(int dado[], int n) {
	int cont, i, j;
	
	for(i=1; i<=6; i++) {
		cont=0;
		for (j=0; j<n; j++) {
			if (dado[j]==i) {
				cont++;
			}
		}
		printf("\nFace %d : %d ocorrencias", i, cont);
	}	
}

int main () {
	int n, i;
	
	printf("Quantas vezes o dado sera lancado: ");
	scanf("%d", &n);
	
	int dado[n];
	
	for (i=0; i<n; i++) {
		dado[i]= 1 + (rand() %6);
		printf("%d, ", dado[i])	;
	}
	
	ocorrencias(dado, n);
	
}
