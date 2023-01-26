#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

int main () {
	int num, i;
	float sequencia[TAMANHO];
    
    printf("quantidade de numeros da sequencia: ");
    scanf("%d", &num);
    
    for (i=0; i<num; i++){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &sequencia[i]);
    }
    
    
    //for (i=0; i<5; i++)
      //  printf("%f, ", sequencia[i]);
    //for (i=5; i>=0; i--){
      //  printf("%f, ", sequencia[i]);
    //}

	return 0;
}



