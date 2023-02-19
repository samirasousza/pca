#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void buscar_nome(char nomes[5][15]) {
	int i;
	char pessoa[15];
	
	printf("Digite o nome da pessoa que deseja buscar sua posicao: ");
	scanf("%14[^\n]s", pessoa);
	
	for (i=0; i<5; i++) {
		if (!(strcmp(nomes[i], pessoa))) {
			printf("\nA pessoa %s esta  na posicao: %d", pessoa, i+1);
			return;
		}
	}
	printf("\nNome nao encontrado");
}

void lista_prioridade (char nomes[5][15], char prioridade[]) {
	int i;
	int nomes_prioridade[5][15];
	int aux=0;
	
	
	for (i=0; i<5; i++) {
		if (prioridade[i] == 'S') {
			strcpy(nomes_prioridade[aux], nomes[i]);
			aux++;
		}
	}
	printf("\n\nPessoas com prioridade: \n");
	
	for (i=0; i<aux; i++) {
		printf("%s\n", nomes_prioridade[i]);
	}
}

int main() {
	char nomes [5][15] = {"Joao", "Sara", "Adria", "Mauro", "Sandra"};
	char prioridade[5] = {'N', 'N', 'S', 'N', 'S'};
	buscar_nome (nomes);
	lista_prioridade(nomes, prioridade);
	return 0;
}

