#include <stdio.h>
#include <stdlib.h>

void vetorPar (int sequencia[], int par[], int tam){
	int i;
	int m=0;
	
    for (i=0; i<tam; i++){
    	if (sequencia[i]%2==0) {
    		par[m] = sequencia[i];
    		m++;
    	}	
	}
}

int numPar (int sequencia[], int tam){
	int i;
	int m=0;
	
	for (i=0; i<tam; i++) {
		if (sequencia[i]%2==0) {
    		m++;	
		}
	}
	return m;

}


int main () {
	int tam, i;
    
    printf("quantidade de numeros da sequencia: ");
    scanf("%d", &tam);
    
    int sequencia[tam];
    int par[tam];
    
    for (i=0; i<tam; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &sequencia[i]);
	}
	
	vetorPar(sequencia, par, tam);
	
	int m = numPar(sequencia, tam);
	
	for (i=0; i<m; i++) {
		printf("%d", par[i]);
	}

	return 0;
}


