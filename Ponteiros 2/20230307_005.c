#include <stdio.h>
#include <stdlib.h>

int ordenar(int *pnum1, int *pnum2, int *pnum3){
	int aux;
	
	if (*pnum1 == *pnum2 && *pnum1 == *pnum3){
		return 1;
	}
	else {
		if (*pnum1 < *pnum2 && *pnum1 < *pnum3){
			if (*pnum2 < *pnum3){
				return 0;
			}
			else {
				aux = *pnum2;
				*pnum2 = *pnum3;
				*pnum3 = aux;
				return 0;
			}
		}
		else {
			if (*pnum2 < *pnum3){
				aux = *pnum1;
				*pnum1 = *pnum2;
				*pnum2 = aux;
				
				if (*pnum2 < *pnum3){
					return 0;
				}
				else {
					aux = *pnum3;
					*pnum3 = *pnum2;
					*pnum2 = aux;
					return 0;
				}
			}
			else {
				aux = *pnum3;
				*pnum3 = *pnum1;
				*pnum1 = aux;
				if (*pnum2 < *pnum3){
					return 0;
				}
				else {
					aux = *pnum3;
					*pnum3 = *pnum2;
					*pnum2 = aux;
					return 0;
				}
			}
		}
	}	
}

int main (){
	int num1 = 6, num2 = 2, num3 = 3;
	
	printf("Antes da troca:\n");
    printf("num1: %d\nnum2: %d\nnum3: %d\n", num1, num2, num3);

	int ordem = ordenar(&num1, &num2, &num3);
	
	printf("\nO resultado da funcao: %d\n", ordem);
    printf("Depois da troca:\n");
    printf("num1: %d\nnum2: %d\nnum3: %d\n", num1, num2, num3);
	
	return 0;
}
