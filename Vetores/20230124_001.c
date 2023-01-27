#include <stdio.h>
#include <stdlib.h>

int main () {
	int num, i;
    
    printf("quantidade de numeros da sequencia: ");
    scanf("%d", &num);
    
    int sequencia[num];
    
    for (i=0; i<num; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &sequencia[i]);
    }
    
    for (i=num-1; i>=0; i--){
    	printf("%d, ", sequencia[i]);
	}

	return 0;
}

