#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, num, par=0, impar=0;
    
	printf("Digite varios numeros inteiros positivos: ");
    scanf("%d", &num);

    while (num<1000){
        if(num%2 == 0){
            par += num;
        }
        
        else {
        	impar += num;
		}

        scanf("%d", &num);
}

    printf("Soma dos impares: %d\n", impar);
    printf("soma dos pares: %d", par);
    
}
