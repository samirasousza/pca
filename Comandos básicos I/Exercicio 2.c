#include <stdio.h>

int main() {
	// Declaracao das variaveis
	char Nome[50], Sexo;
	int Idade;
	
	// Mostrar e fazer leitura da mensagem
	printf("Digite seu nome: ");
	scanf("%s", &Nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &Idade);
	
	printf("Digite o sexo [F] ou [M]: ");
	scanf("%s", &Sexo);
	
	// Condicao para saber se e mulher
	if (Sexo=='F') {
		printf("E uma Mulher");
	}	
	else {
		printf("Nao e mulher");
	}
	
	return(0);
}
