#include <stdio.h>
#include <stdlib.h>

int contar (int n, int d) {
	int cont=0;
	
	while (n>0) {
		if (n%10==d) {
			cont++;
		}
		n=n/10;
	}
	return cont;
}

int main () {
	int n, d;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	
	printf("\nDigite um numero de entre 0 e 9: ");
	scanf("%d", &d);
	
	printf("\nO numero %d aprece em %d %d vezes", d, n, contar(n, d));
	
}
