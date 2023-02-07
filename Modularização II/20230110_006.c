#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int transformar (int decimal) {
	int binario=0;
	int cont=0;
	int aux;
	
	while (decimal>0){
		aux=decimal%2;
		binario+=aux*pow(10,cont);
		cont++;
		decimal=decimal/2;
	}
	return binario;
	
}

int main () {
	int decimal;
	
	printf("Escreva um numero decimal: ");
	scanf("%d", &decimal);
	
	printf("\nNumero decimal: %d ==> %d binario", decimal, transformar(decimal));
	
	return 0;
}
