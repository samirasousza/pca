#include <stdio.h>
#include <stdlib.h>

int main() {
	float num, soma=0;
	int i;
	
	for (i=1; i<=5; i++) {
		printf("Digite um numero: ");
		scanf("%f", &num);
		soma = soma + num;
}
  
	printf("A soma desses numeros e: %.2f", soma);
	
}
