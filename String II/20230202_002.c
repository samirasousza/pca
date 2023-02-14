#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

#define max 120

void listarNome(char nome[][max]){
	int i;
	for (i = 0; i < 3; i++){
		printf("%s \n", nome[i]);
	}	
}

char deleteNome(char nome[][max]){
	int i, j = 0, count = -1;
	char newNome[5][max];
	char aux2[max], temp;
	
	printf("Digite um nome para eliminar: \n");
	scanf("%s",aux2);
	for (i = 0; i < 3; i++){
		count = strcmp(nome[i],aux2);
			if (count != 0){ 
				strcpy(newNome[j], nome[i]);
				j++;
			}
	}
	return newNome[j][max];
}
void listarAlfa(char nome[][max]){
	int i,j, count;
	int n = 3;
	char s[max];
	for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(nome[i],nome[j])>0){
            strcpy(s,nome[i]);
            strcpy(nome[i],nome[j]);
            strcpy(nome[j],s);
         }
      }
   }
	for (i = 0; i < 3; i++){
		printf("%s \n", nome[i]);
	}	
}

int main(){
	setlocale(LC_ALL, "");
	int i, j, tam, op = 0, count=0;
	char nome[5][max];
	char aux[5][max];
	printf("==Lista de Nomes==\n");
	for (i = 0; i < 3; i++){
		printf("Digite o %d° nome e sobrenome: ", i+1);
		gets(nome[i]);
	}
	system("cls");
	printf("===O que deseja acessar?===\n");
	printf("[1] - Listar nomes\n");
	printf("[2] - Eliminar um nome\n");
	printf("[3] - Listar nomes em ordem alfabética\n");
	scanf("%d", &op);
	switch(op){
		case 1:
			listarNome(nome);
			break;
		case 2:
			nome[5][max] = deleteNome(nome);
			break;
		case 3:
			listarAlfa(nome);
			break;
		default :
    	printf ("Valor invalido!\n");
	}
	
	return 0;
}
