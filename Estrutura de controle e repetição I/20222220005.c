#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, num, maior, menor;
	
	printf("Digite 20 n�meros inteiros\n");
    printf("Note que apenas n�meros positivos ser�o considerados\n");

    scanf("%d", &menor);
    scanf("%d", &maior);
		
	if(maior<menor) {
		
		num = maior;
		maior = menor;
		menor = num;
	}

    for (i=0; i<18; i++) {
		if(maior<0) {
			scanf("%d", &maior);
		}
		else {
			if(menor<0){
				scanf("%d", &menor);
			}
			else {
				scanf("%d", &num);
			}
		}
		
		if(num>=0 ){
			if (num > maior) {
				maior = num;
			}
			else {
				if (num < menor) {
					menor = num;
				}
			}
		}
	}
	 
	if (maior>=0 && menor>=0) {
		printf("O maior �: %d\nO menor �: %d", maior, menor);
	}
	else {
		printf("N�o h� valores positivos o suficiente para comparacao");
	}

}
