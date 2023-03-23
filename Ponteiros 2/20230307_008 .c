#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
	float aux = *a;
	*a = *b;
	*b = aux;
	
}

int main(){
	float a = 10.10;
	float b = 55.5;
	
	printf("Antes da troca:\n");
	printf("a: %.2f\nb: %.2f\n\n", a, b);
	
	troca(&a, &b);
	
	printf("Apos a troca:\n");
	printf("a: %.2f\nb: %.2f\n\n", a, b);
	
	return 0;
}
