#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, num, soma=0;
	
	for (i=1; i<=50; i++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		if (num%2!=0 && 100<num<200){
			soma += num;
}}
			
	printf("A soma dos numeros impares entre 100 e 200 e: %d", soma);	
	
}
