#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#define max 50


int main(){
	setlocale(LC_ALL, "");
	int a[max][max], b[max][max], n, tam, soma;
	int s[tam], s2[tam]; 
	int i = 1, j = 1;
	int rd;
	srand(time(NULL));
	
	printf("Digite o n da matriz: \n");
	scanf("%d", &n);
	
	printf("Custos de cada itinerário: \n");
	
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
			rd = rand() % 100;
			a[i][j] = rd;
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite a quantidade de cidades a visitar: ");
	scanf("%d", &tam);
	
	for (i = 1; i <= tam; i++){
		printf("Digite o itinerário: \n");
		scanf("%d", &s[i]);
	}
	
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
			if (j == s[i]){
				soma += a[s[i]][s[i+1]];
			}
		}
	}
	printf("Custo do itinerário: %d \n", soma);
	


	return 0;
}

