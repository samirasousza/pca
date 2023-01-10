#include <stdio.h>
#include <stdlib.h>

int main(void){
	int p, i, aux=1, impar=1, sum=0;
	
    printf("Digite o numero p: ");
    scanf("%d", &p);

    while (aux<=p){
        printf("\n- %d*%d*%d = ", aux, aux, aux);

        for (i=1; i<=aux; i++){
            printf("+%d ", impar);
            sum += impar;
            impar += 2;
        }
		
        printf("= %d\n", sum);
        
        sum = 0;
        aux++;
        
    }
}
