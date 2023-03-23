#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int qnt, float *media, float *desvio){
	float soma = 0.0;
	float soma_desvio = 0;
	float *pnot;
	
	for(pnot = notas; pnot <= notas+(qnt-1); pnot++){
		soma += *pnot;
	}
	
	*media = soma/qnt;
	
	for(pnot = notas; pnot <= notas+(qnt-1); pnot++){
		soma_desvio += pow((*pnot - *media), 2);
	}
	
	*desvio = sqrt(soma_desvio/qnt);
}

int main(){
	int qnt, i;
	
	printf("Qual a quantidade de alunos: ");
	scanf("%d", &qnt);
	
	if(qnt<=0){
		do{
			printf("\nQuantidade invalida, digite novamente: ");
			scanf("%d", &qnt);
		}while(qnt<=0);
	}
	
	float *notas;
	notas = (float*) malloc (qnt * sizeof(float));
	if (notas == NULL){
		printf("\nERROR. não foi possivel alocar memória.");
		return -1;
	}
	else{
		printf("Agora digite as notas dos alunos:\n");
		
		for(i=0; i<qnt; i++){
			scanf("%f", notas+i);
		}
	}
	
	float media, desvio;
	
	mediaDesvio(notas, qnt, &media, &desvio);
	
	printf("Media da turma: %.2f\n", media);
    printf("Desvio padrao: %f\n", desvio);
    free(notas);
	
	return 0;
}
