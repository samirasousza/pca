#include <stdio.h>
#include <stdlib.h>

void frequencia(char vetor[], char letra, int pos_letra[], int *tam){
	int i=0;
	*tam = 0;
	while(vetor[i]  != '\0'){
		if(vetor[i] == letra){
			pos_letra[*tam] = i;
			*tam+=1;
		}
		i++;
	}	
}

int main(){
	char vetor[] = "chuveiro";
	char letra = 'h';
	
	int pos_letra[sizeof(vetor)];
	int tam;
	
	frequencia(vetor, letra, pos_letra, &tam);
	int i;
	
	printf("tam: %d\n", tam);
	for(i=0; i<tam; i++){
		printf("pos: %d\n", pos_letra[i]);
	}
	
	return 0;
}
