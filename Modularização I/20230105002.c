#include <stdio.h>
#include <stdlib.h>

int pesoSemanas (char opcao[7]) {
	int ler;
	
	if (!(strcmp(opcao, "peso"))) {
		printf("Digite o peso do feto em gramas: ");
		scanf("%d", &ler);
		return ler;
	}
	else {
		printf("\nDigite a quantidade de semanas de gestacao: ");
		scanf("%d", &ler);
		return ler;
	}
}

int tipoDeParto (peso, semanas) {
	float meses;
	
	printf("\n");
	
	if (peso<100 || semanas<28) {
		printf("Parto nao devera ser realizado, reavaliar clinicamente");
		return;
	}
	else {
		meses=semanas/4;
		
		if (peso>2500 && meses>7) {
			printf("Parto normal");	
		}
		else if (peso>2500 && meses<7) {
			printf("Parto Cesariana");	
		}
		else if (2000<peso<1500 && meses>9) {
			printf("Parto normal");	
		}
		else {
			printf("Parto Cesariana");
		}
	}			
}


int main () {
	int peso = pesoSemanas("peso");
	int semanas = pesoSemanas("semanas");

	tipoDeParto(peso, semanas);
	
	return;
}
