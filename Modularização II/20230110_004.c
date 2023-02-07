#include <stdio.h>
#include <stdlib.h>

int ultimosDigitos(int x, int y){
	int igual=1;
	int d, e;
	
	if (y>x) {
		return !igual;
	}
	else {
		d=x%10;
		e=y%10;
		x=x/10;
		y=y/10;
		
		if (d!=e) {
			return !igual;
		}
	
		while (y>0) {
			if (d!=e) {
				return !igual;
			}
			
			d=x%10;
			e=y%10;
			x=x/10;
			y=y/10;
		}
		
		return igual;
	}
}


int comparar (int x, int y) {
	int igual=0;
	
	if (y>x) {
		return igual;
	}
	else {
		if (ultimosDigitos(x,y)) {
			return !igual;
		}
		else {
			x=x/10;
		}
		
		while (x>0) {
			if (ultimosDigitos(x,y)) {
				return !igual;
			}
			else {
				x=x/10;
			}
			
		}
		
		return igual;
	}
	
}

int main () {
	int x, y, igual;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &x);
	
	printf("Escreva um numero inteiro menor que o anterior: ");
	scanf("%d", &y);
	
	igual = comparar(x, y);
	
	if (igual) {
		printf("\nE um seguimento :)");
	}
	else {
		printf("\nNao e um segmento :(");
	}
	
	return 0;
	
}
