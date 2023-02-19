#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordena_avaliacao(char equipe[23][30], char funcao[23][12], int avaliacao[], int max , int min){
	int aval;
	char equ[30];
	int troca=1;
	int i, j, k;
	
	print("oi");
	
	for(j=max; (j>=min) && (troca==1); j--){
		troca = 0;
		for(i=min-1; i<j; i++){
			if(avaliacao[i]<avaliacao[i+1]){
				aval = avaliacao[i];
				avaliacao[i] = avaliacao[i+1];
				avaliacao[i+1] = aval;
							
				strcpy(equ, equipe[i]);
				strcpy(equipe[i], equipe[i+1]);
				strcpy(equipe[i+1], equ);
							
				troca = 1;
					
				
			}
		}
	}
}


int main() {
	char equipe[23][30] = {"Hugo Souza", "Matheus Cunha","Santos",
							"Rodrigo Caio", "Leo Pereira", "David Luiz",
							"Cleiton", "Fabricio Bruno", "Pablo", "Gerson",
							"Matheuzinho", "Varela", "Filipe Luis",
							"Ayrton Lucas", "Everton Ribeiro", "De Arrascaeta",
							"Victor Hugo", "Matheus Franca", "Gabi",
							"Bruno Henrique", "Pedro", "Marinho", "Everton"};
	
	char funcao[23][12] = {"Goleiro", "Goleiro", "Goleiro",
							"Defesa", "Defesa", "Desefa",
							"Defesa","Defesa", "Defesa", "Defesa",
							"Medio Campo", "Medio Campo", "Medio Campo", "Medio Campo",
							"Medio Campo", "Medio Campo", "Medio Campo", "Medio Campo",
							"Atacante", "Atacante", "Atacante", "Atacante", "Atacante"};

	int avaliacao[23] = {8, 5, 1, 
						6, 5, 10, 1, 1, 6, 8,
						2, 3, 10, 10, 10, 10, 5, 4,
						10, 5, 10, 7, 8};
	
	
	printf("FORMACAO OFICIAL:\n\n");
	
	int i, j, aux;
	char formacao[11][30];
	
	// Goleiro
	ordena_avaliacao(equipe, funcao, avaliacao, 2, 1);
	
	strcpy(formacao[0], equipe[0]);
	
	// Defesa
	ordena_avaliacao(equipe, funcao, avaliacao, 9, 4);
	
	int defesa=1;
	for (i=3; i<=6; i++) {
		strcpy(formacao[defesa], equipe[i]);
		defesa++;
	}
	
	// Medio campo
	ordena_avaliacao(equipe, funcao, avaliacao, 17, 10);
	
	int medio=4;
	for (i=10; i<=13; i++) {
		strcpy(formacao[medio], equipe[i]);
		medio++;
	}
	
	// Ataque
	ordena_avaliacao(equipe, funcao, avaliacao, 22, 18);
	
	int ataque=8;
	for (i=18; i<=20; i++) {
		strcpy(formacao[ataque], equipe[i]);
		ataque++;
	}
	
	
	for (i=0; i<=11; i++) {
		printf("%d, ", avaliacao[i]);
	}
	
	for (i=0; i<=11; i++) {
		printf("\n%s\n", equipe[i]);
	}
	
}

