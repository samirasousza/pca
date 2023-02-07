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


int main(){
	int x, y, igual;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &x);
	
	printf("Escreva outro numero inteiro: ");
	scanf("%d", &y);
	
	igual = ultimosDigitos(x, y);
	
	if (igual) {
		printf("Corresponde");
	}
	else {
		printf("Nao corresponde");
	}
	
	return 0;
}
