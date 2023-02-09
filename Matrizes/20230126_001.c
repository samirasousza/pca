#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, j;
	
	int m1[3][5] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}};
	int m2[3][5] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}};
	
	printf("Matriz 1:\n");
	
	for (i=0; i<3; i++) {
		for (j=0; j<5; j++) {
			printf("%d  ", m1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMatriz 2:\n");
	
	for (i=0; i<3; i++) {
		for (j=0; j<5; j++) {
			printf("%d  ", m2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nSoma das matrizes:\n");
	
	for(i=0; i<3; i++) {
		for (j=0; j<5; j++) {
			(printf("%d  ", m1[i][j] + m2[i][j]));
		}
		printf("\n");
	}
	
	
}
