#include <stdio.h>
#include <stdlib.h>

int *acharValor(int *start, int *end, int valor){
	int *pvet;
		
	for(pvet = start; pvet<=end; pvet++){
		if (*pvet == valor) {
			return pvet;
		}
	}
	return NULL;
}

int main() {
	int vet[] = {1, 2, 3, 2, 5, 2, 7, 8, 9, 10};
	int *inteiro;
	int cont = 0;
	
	printf("Endereço de memoria das ocorrencias do valor:\n");
	
	inteiro = acharValor(&vet[0], &vet[9], 2);
	
	if (inteiro != NULL) {
		printf("\nValor %d no endereco: %d", *inteiro, inteiro);		
	}
	else {
		printf("\nValor nao encontrado");
	}
	
	while(inteiro != NULL) {
		cont++;
		inteiro = acharValor(inteiro + 1, &vet[9], 2);
		if (inteiro != NULL){
			printf("\nValor %d no endereco: %d", *inteiro, inteiro);
		}
	}
	return 0;
}

