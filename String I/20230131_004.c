#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

#define max 20


int main(){
	setlocale(LC_ALL, "");
	int i, j, tam, count = 0;
	int subtam, pos;
	char word[max], word2[max], aux[max], pos1[tam];
	char chr, chr2;
	char *aux2;
	
	printf("Digite uma string (Máx 20): ");
	scanf("%s", word);
	fflush(stdin);
	printf("Digite um caractere: ");
	chr = getch();
	printf("\nDigite um segundo caractere: ");
	chr2 = getch();
	for (i = 0; i < max; i++){
		if (word[i] == '\0'){
			tam = i;
			break;
		}
	}
	fflush(stdin);
	printf("\nTamanho da string: %d \n", tam);
	printf("Digite uma nova string (Máx 20): ");
	scanf("%s", word2);
	printf("Comparação entre as strings: ");
	if (strcmp(word,word2)!=0){
		printf("As strings são diferentes \n");
	}else{
		printf("As strings são iguais \n");
	}
	fflush(stdin);
	printf("Concatenação entre as strings: ");
	strcpy(aux, word);
	strncat(aux, word2, max);
	printf("%s", aux);
	fflush(stdin);
	printf("\nString 1 invertida \n");
	for (i = tam; i >= 0; --i){
		printf("%c", word[i]);
	}
	fflush(stdin);
	printf("\nCaractere em String \n");
	for (i = 0; i < tam; i++){
		if (chr == word[i]){
			count++;
		}
	}
	if (count > 0){
		printf("Caractere encontrado %d vezes", count);
	}else{
		printf("Caractere não encontrado");
	}
	strcpy(aux, word);
	fflush(stdin);
	printf("\nSubstituição de C1 em S1 para C2: ");
	for (i = 0; i < tam; i++){
		if (chr == aux[i]){
			aux[i] = chr2;
			break;
		}
	}
	printf("%s", aux);
	fflush(stdin);
	printf("\nVerificar se String2 é substring de S1 \n");
	aux2 = strstr(word, word2);
	if(aux2 == NULL){
		printf("Não são substrings\n");
	}else{
		printf("São substrings\n");
	}
	fflush(stdin);
	printf("Informe a posição da substring de S1: ");
	scanf("%d", &pos);
	printf("Informe o tamanho da substring de S1: ");
	scanf("%d", &subtam);
	
	for (i = 0; i <= subtam; i++){
		if (i >= pos){
			pos1[i+1] = word[i];
		}
	}
	fflush(stdin);
	printf("Substring de S1: %s", pos1);

	return 0;
}
