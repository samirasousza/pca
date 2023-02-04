#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main () {
	int i, j;
	char equipe[4][200];
	
	for (i=0; i<4; i++) {
		printf("\nDigite o nome do aluno %d: ", i+1);
		gets(equipe[i]);
	}
	
	printf("\n\nOs nomes dos alunos da equipe 1:\n\n");
	
	for (i=0; i<5; i++); {
		for (j=0; i<200; i++) {
			printf("%s\n", equipe[i]);
		}
	}
	
	return 0;
}


