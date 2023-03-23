#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[8];
	int i = 1, j = 1;
	int *parray;
	
	for(parray = &array[0]; parray <= &array[7]; parray++){
		printf("\nDigite o valor %d do array: ", i);
		scanf("%d", parray);
		i++;
	}
	
	printf("\n");
	
	for(parray = &array[0]; parray <= &array[7]; parray++){
		printf("\nDobro do valor %d do array: %d", j, *parray * 2);
		j++;
	}
	
	printf("\n\nEndereco das posicoes com valores pares:");
	
	for(parray = &array[0]; parray <= &array[7]; parray++){
		if (*parray % 2 == 0){
			printf("\n\n Valor %d:		Endereco= %d;", *parray, parray); 	
		}
	}
	
	return 0;
}

