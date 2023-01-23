#include <stdio.h>
#include <math.h>

float numReal(float x) {
	do{
	printf("Digite um numero real positivo de 0 a 1: ");
	scanf("%f", &x);
	}
	while (x<0 || x>1);
	
	return x;
}

double arctan (double x) {
	double arc= x;
	int i=3, j=1;
	
	while (abs(arc)<0.0001) {
		if(j%2==0){
			arc += pow(x,i)/i;
		}
		else{
			arc -= pow(x,i)/i;
		}
		i+=2;
		j++;
	
	return arc;
	}
}

int imprimaValores (double x, double arc) {
	printf("arctan(%f) = %f", x, arc);
	
	return 0;
}

int main () {
	double x = numReal(x);
	double arc = arctan(x);
	imprimaValores(x, arc);
	
	return 0;
}

