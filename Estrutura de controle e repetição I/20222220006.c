#include <stdio.h>
#include <stdlib.h>

int main() {
	float num, i;
	
	for(num=1; num<=9; num++){
		printf("TABUADA DO %.1f\n", num);
		
		for(i=1; i<=9; i++){
			printf("%.1f + %.1f = %.1f    ", num, i, num+i);
			printf("%.1f - %.1f = %.1f    ", num, i, num-i);
			printf("%.1f * %.1f = %.1f    ", num, i, num*i);
			printf("%.1f : %.1f = %.1f\n", num*i, i, num*i/i);
		}
		printf("\n");
	}
}
