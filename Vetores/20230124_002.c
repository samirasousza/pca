#include <stdio.h>
#include <stdlib.h>

void imprimirInversa (int sequencia[], int tam){
	int i;
	
    for (i=tam-1; i>=0; i--){
    	printf("%d, ", sequencia[i]);
	}
	
}

int main () {
	int tam, i;
    
    printf("quantidade de numeros da sequencia: ");
    scanf("%d", &tam);
    
    int sequencia[tam];
    
    for (i=0; i<tam; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &sequencia[i]);
	}
	
	imprimirInversa(sequencia, tam);

	return 0;
}


