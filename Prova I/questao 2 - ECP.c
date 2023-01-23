#include <stdio.h>
#include <math.h>

float numInt() {
	int x;
	do{
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &x);
	}
	while (x<0);
	
	return x;
}

int hiperFatorial(int x) {
	int i, hiper=1;
	
	for (i=0;i<=x;i++) {
		hiper *= pow(i,i);
	}
	
	return hiper;
	}

int main () {
	int x = numInt(x);
	printf("\nO hiper fatorial e: %d", hiperFatorial(x));
	
	return 0;
}

