#include <stdio.h>

int main(){
	float farenheit, celsius;
	
	printf("Digite a temperatura em graus Farenheit:\n");
	scanf("%f", &farenheit);
	
	celsius = ((farenheit-32)*5)/9;
	printf("A temperatura em graus Celsius e %.2fC", celsius);
	
	return 0;
}
