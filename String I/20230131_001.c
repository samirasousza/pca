#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palavraInvertida(char palavra[], int tam) {
	int i;
	
	printf("\nA string invertida: ");
	
	for (i=tam; i>=0; i--){
		printf("%c", palavra[i]);
	}
	
	return 0;
		
}


int semVogais(char palavra[], int tam){
	int i;
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


int maiusculo (char palavra[], int tam) {
	int i;
	char nova_palavra[200];

	printf("\nA string em capslock: ");
	
	for (i=0; i<=tam; i++) {
		if ((palavra[i] >= 'a') && (palavra[i] <= 'z')) {
			nova_palavra[i] = palavra[i] - 32;
		}
	}
	
	for (i=0; i<=tam; i++) {
		printf("%c", nova_palavra[i]);
	}
	
		return 0;
}


int caractRepetidos (char palavra[], int tam, char caract) {
	int i, cont=0;
	
	for (i=0; i<=tam; i++) {
		if (palavra[i] == caract) {
			cont++;
		}
	}
	
	printf("\nO caractere %c aparece %d vezes na palavra %s", caract, cont, palavra);
	
	return 0;
}


void apagarCaract (char palavra[], int tam, char caract) {
	int i, cont=0;
	char nova_palavra[tam];
	
	printf("\nA string sem o caractere %c: ", caract);
	
	while (palavra[i] != '\0') {
		if (palavra[i] != caract) {
			nova_palavra[cont] = palavra[i];
			cont++;
		}
		i++; 
	}
	
	for (i=0; i<cont; i++) {
		printf("%c", nova_palavra[i]);
	}
} 



int main () {
	char palavra[200];
	char caract;
	int tam;
	
	printf("Digite uma string: ");
	scanf("%s", palavra);
	
	tam = strlen(palavra);
	
	printf("\nDigite um caractere: ");
	scanf(" %c", &caract);
	
	palavraInvertida(palavra, tam);
	semVogais(palavra, tam);
	maiusculo(palavra, tam);
	caractRepetidos(palavra, tam, caract);
	apagarCaract(palavra, tam, caract);
	
	return 0;
}

