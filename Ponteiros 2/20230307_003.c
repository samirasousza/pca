#include <stdio.h>
#include <stdlib.h>

int main() {
	int inteiro = 2;
	float real = 5.5;
	char caract = 'a';
	
	int *pinteiro = &inteiro;
	float *preal = &real;
	char *pcaract = &caract;
	
	printf("Antes da alteracao:\n");
	printf("inteiro: %d\n", *pinteiro);
	printf("real: %f\n", *preal);
	printf("caract:  %c\n", *pcaract);
	
	*pinteiro = 5;
	*preal = 1.1;
	*pcaract = 's';
	
	printf("\nDepois da alteracao:\n");
	printf("inteiro: %d\n", *pinteiro);
	printf("real: %f\n", *preal);
	printf("caract:  %c\n", *pcaract);
	
	return 0;
}

