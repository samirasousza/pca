#include <stdio.h>

int main (void) {
	// Declaracao das variaveis
	float Base, Altura, Area;
	
	// Mostrar e fazer leitura da mensagem
	printf("Digite a base do triangulo: ");
	scanf("%f", &Base);
	
	printf("Digite a altura do triangulo: ");
	scanf("%f", &Altura);
	
	// Calcular e mostrar o valor da area
	Area = (Base*Altura)/2;
	printf("A Area do triangulo e %.2f", Area);
}
