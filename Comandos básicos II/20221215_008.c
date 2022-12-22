#include <stdio.h>

int main() {
	float farenheit, celsius;
	
	printf("Digite a temperatura em graus Celsius:\n");
	scanf("%f", &celsius);
	
	farenheit = celsius*9/5+32;
	printf("A temperatura em graus Farenheit e %.2fF", farenheit);
	
	return 0;
}
