#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[8];
	int i = 1;
	int *parray;
	
	for(parray = array[0]; parray<array[7]; parray++){
		printf("\nDigite o valor %d do array:", i);
		scanf("%d", array[i]);
		i++;
	}
	
	for(parray = array[0]; parray<array[7]; parray++){
		printf("\nDobro do valor %d do array:", *);
	}
	
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

