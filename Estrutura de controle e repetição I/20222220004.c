#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, num, maior, menor;
	
	printf("Digite 20 numeros inteiros:\n");
	
	scanf("%d", &maior);
	scanf("%d", &menor);
	
	if (maior<menor) {
		num = maior;
		maior = menor;
		menor = num;
    }
    
	for (i=0; i<18; i++) {
		scanf("%d", &num);
		
		if (num>maior) {
			maior = num;
		}
		else{
            if (num < menor){
                menor = num;
            }
		}
	}
	
	printf("Maior valor: %d\n", maior);
	printf("Maior valor: %d", menor);
	
}
