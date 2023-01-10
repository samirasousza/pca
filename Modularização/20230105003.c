#include <stdio.h>
#include <stdlib.h>

int numeroPar (int num) {
	printf("Digite um numero inteiro positivo par: ");
	scanf("%d", &num);

	while (num%2!=0) {
		printf("\nVoce digitou um numero impar\n");
		printf("Digite novamente um numero inteiro positivo par: ");
		scanf("%d", &num);
	}

	return num;
}

void numeroPerfeito (int num) {
    int i, aux=0;

    for (i=1; i<num; i++) {
        if (num%i==0) {
            aux += i;
        }
    }

    if (aux==num) {
        printf("\nO numero digitado e perfeito :)\n");
    }
    else {
        printf("\nO numero digitado nao e perfeito :(\n");
    }
}

int main () {
	int num = numeroPar(num);

	numeroPerfeito(num);

	return 0;
}                                                                                          
