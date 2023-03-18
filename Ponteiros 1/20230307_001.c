#include <stdio.h>
#include <stdlib.h>

void imprimeReal(float *start, float *end){
	float *pvet;
	
	for(pvet = start; pvet<=end; pvet++){
		printf("%f\n", *pvet);
	}
}

int main() {
	float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	
	imprimeReal(&vet[0], &vet[4]);
	
	return 0;
}

