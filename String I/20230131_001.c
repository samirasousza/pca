#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palavraInvertida() {
	char palavra[200];
	int i, tam;
	
	printf("Escreva uma string: ");
	scanf("%s", &palavra);
	
	tam = strlen(palavra);
	
	printf("\nA string invertida: ");
	
	for (i=tam; i>=0; i--){
		printf("%c", palavra[i]);
	}
	
	return 0;
		
}


int semVogais(){
	char palavra[200];
	int i, tam;
	
	printf("\n\nEscreva uma string: ");
	scanf("%s", &palavra);
	
	tam = strlen(palavra);
	
	char vogais[tam];
	char consoantes[tam];
	int numVogais=0 , numConsoantes=0;
	
	printf("\nA string sem vogais: ");
	
	for (i=0; i<=tam; i++) {
		if (palavra[i] == 'a' || palavra[i] == 'e' 
		|| palavra[i] == 'i' || palavra[i] == 'o' 
		|| palavra[i] == 'u'){
			vogais[numVogais] = palavra[i];
			numVogais++;
		}
		else {
			consoantes[numConsoantes] = palavra[i];
			numConsoantes++;
			
		}	
	}
	
	for (i=0; i<=numConsoantes; i++) {
		printf("%c", consoantes[i]);
	}
	
	return 0;
		
}


int maiusculo () {
	char palavra[200];
	int i, tam;
	
	printf("\n\nEscreva uma string em minusculo: ");
	scanf("%s", &palavra);
	
	tam = strlen(palavra);
	
	printf("\nA string em capslock: ");
	
	for (i=0; i<=tam; i++) {
		if ((palavra[i] >= 'a') && (palavra[i] <= 'z')) {
			palavra[i] = palavra[i] - 32;
		}
	}
	
	for (i=0; i<=tam; i++) {
		printf("%c", palavra[i]);
	}
	
		return 0;
}


int caractRepetidos () {
	char palavra [200];
	int i, tam, cont=0;
	char caract;
	
	printf("\n\nDigite uma string: ");
	scanf("%s", &palavra);
	
	tam = strlen(palavra);
	
	printf("\nDigite um caractere: ");
	scanf("%c", &caract);
	
	for (i=0; i<=tam; i++) {
		if (palavra[i] == caract) {
			cont++;
		}
	}
	
	printf("\nO caractere %c aparece %d vezes na palavra %s", caract, cont, palavra);
	
	return 0;
}


int main () {
	palavraInvertida();
	semVogais();
	maiusculo();
	caractRepetidos();
	
	return 0;
}

