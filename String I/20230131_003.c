#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){
	char formato[11];
	int i, dia, mes, ano;
	printf("Digite uma data em formato DD/MM/AAAA: ");
	scanf("%s", formato);
	for(i = 0; i < 11; i++){
		if('/' != formato[2] || '/' != formato[5]){
			printf("ERRO!");
			printf("Digite uma data: ");
			scanf("%s", formato);
		}
	}
	char *cut = strtok(formato, "/");
	dia = atoi(cut);
	for (i = 0; cut != NULL; i++){
		printf( "%s\n", cut );
        cut = strtok(NULL, "/");
        if (i == 0){
        	mes = atoi(cut);
		}
		if (i == 1){
			ano = atoi(cut);
		}
	}
	
	return 0;
}
