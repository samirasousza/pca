#include <stdio.h>

int main() {
	float altura, peso;
	
	printf("Digite a altura:\n");
	scanf("%f", &altura);
	
	peso = (72.7*altura)-58;
	printf("O peso ideal e %.2f", peso);
	
	return 0;
}
