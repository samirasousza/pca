#include <stdio.h>
#include <math.h>

int main() {
	int num1, num2;
	float real, valor1, valor2, valor3;
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &num1);
	
	printf("Digite um numero inteiro:\n");
	scanf("%d", &num2);
	
	printf("Digite um numero real:\n");
	scanf("%f", &real);
	
	valor1 = (num1*2)*(num2/2);
	valor2 = (num1*3)+real;
	valor3 = pow(real,3);

	printf("\nO produto do dobro do primeiro com metade do segundo é igual a %.2f",valor1);
    printf("\nA soma do triplo do primeiro com o terceiro é igual a %.2f",valor2);
    printf("\nO terceiro elevado ao cubo é igual a %.2f",valor3);

	return 0;
}
