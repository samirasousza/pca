#include <stdio.h>

int main() {
	// Declaracao das variaveis
	float Valortotal, Porcentagem, Valorgarcom;
	
	// Mostrar e fazer leitura da mensagem
	printf("Digite o valor total da conta: ");
	scanf("%f", &Valortotal);
	
	printf("Digite a porcentagem do garcom: ");
	scanf("%f", &Porcentagem);

	// Calcular e mostrar o valor do garcom	
	Valorgarcom = (Valortotal*Porcentagem)/100;
	printf("O valor da porcentagem do garcom e R$%.2f", Valorgarcom);
	
	return(0);
}
