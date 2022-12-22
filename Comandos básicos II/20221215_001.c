#include <stdio.h>

int main() {
    int num,num2, soma;

    printf("Escreva dois numeros para a soma:\n");
    scanf("%d%d", &num, &num2);

    soma = num + num2;
    printf("soma de %d e %d = %d\n", num, num2, soma);
	
	return 0;
}

