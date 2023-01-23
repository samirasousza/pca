#include <stdio.h>
#include <stdlib.h>

int scanIntervalo (int x) {
	
	printf("Digite um numero inteiro entre 1 a 1000: ");
	scanf("%d", &x);
		
	while (x<0 || x>1000) {
		printf("\nERRO\n");
		printf("\nDigite novamente um numero inteiro entre 1 a 1000: ");
		scanf("%d", &x);
	}
	
	return x;
}

int percentual (int x, int y) {
	int percentual;
	
	if (x>y) {
		percentual=y*100/x;
	}
	else {
		percentual=x*100/y;
	}
	
	return percentual;
}

int modulo (int x, int y) {
	int modulo;
	
	modulo=abs(x-y);
	
	return modulo;
}
	
int main () {
	int x = scanIntervalo(x);
	int y = scanIntervalo(y);
	
	printf("\nPercentual do numero em relacao ao maior: %d", percentual(x, y));
	printf("\nO modulo da diferenca entre o maior e o menor: %d", modulo(x, y));
	
	
	
}

