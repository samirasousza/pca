#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, num, maior, menor;
	
	printf("Digite 20 números inteiros\n");
    printf("Note que apenas números positivos serão considerados\n");

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
		printf("O maior é: %d\nO menor é: %d", maior, menor);
	}
	else {
		printf("Não há valores positivos o suficiente para comparacao");
	}

}
