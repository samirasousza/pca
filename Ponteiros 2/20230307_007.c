#include <stdio.h>
#include <stdlib.h>

void min_max (int array[], int tam, int *min, int *max){
	tam = tam/sizeof(int);
	*min = array[0];
	*max = array[0];
	int *parray;
	
	for(parray = array; parray <= &array[tam - 1]; parray++){
		if(*parray < *min){
			*min = *parray;
		}
	}
}

int main (){
	int array[] = {12, 15, -8, 9, -3, 1, 22};
	int min, max;
	
	min_max(array, sizeof(array), &min, &max);
	
	printf("Max: %d\nMin: %d\n", max, min);
	
	return 0;
}
