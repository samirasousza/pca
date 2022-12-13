#include <stdio.h>

int main() {
	// Declaracao das variaveis
	float Salario, Salarionovo;
	
	// Mostrar e fazer leitura da mensagem
	printf("Digite seu salario: ");
	scanf("%f", &Salario);
	
	// Calcular e mostrar o novo salario
	Salarionovo = (Salario*0.10) + Salario;
	printf("O novo salario e R$%.2f", Salarionovo);
	
	return(0);	
}

