#include <stdio.h>
#include <stdlib.h>

int main(void){
	int p, i, proceed=1, impar=1, sum=0;
	
    printf("Digite o numero p: ");
    scanf("%d", &p);

    while (proceed<=p){

        printf("\n%d*%d*%d = ", proceed, proceed, proceed);

        for (i=1; i<=proceed; i++){
            printf("+%d ", impar);
            sum += impar;
            impar += 2;
        }
		
        printf("= %d\n", sum);
        sum = 0;

        proceed++;
    }
}
