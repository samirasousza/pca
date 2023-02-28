#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void AdicionarAluno(char equipe_1[6][31], char equipe_2[6][31], char sexo[2][6], float notas[2][6]){
	int i, j;
	char resposta;
	char nova_equipe1[7][31];
	char nova_equipe2[7][31];
	char novo_sexo[2][7];
	float nova_nota[2][7];
	
	
	printf("\nDeseja adicionar mais um aluno nas equipes? [S] ou [N]: ");
	scanf(" %c", &resposta);
		
	if(resposta == 'S'){
		for(i=0; i<2; i++){
			for(j=0; j<6; j++){
				if(i==0){
					strcpy(nova_equipe1[i], equipe_1[i]);
				}
				else if (i==1){
					strcpy(nova_equipe2[i], equipe_2[i]);
				}
				
				strcpy(novo_sexo[i], sexo[i]);
				nova_nota[i][j] = notas[i][j];
			}
		}
		
		for(i=0; i<2; i++){
			if (i==0) {
				printf("Nome do novo aluno da equipe 1: ");
				scanf("%30[^\n]s", nova_equipe1[7]);
				fflush(stdin);
			}
			if (i==1){
				printf("Nome do novo aluno da equipe 2: ");
				scanf("%30[^\n]s", nova_equipe2[7]);					
				fflush(stdin);
			}
			printf("Sexo do novo aluno da equipe %d [F] ou [M]: ", i+1);
			scanf(" %c", &novo_sexo[i][7]);
		
			printf("Nota do novo aluno da equipe %d: ", i+1);
			scanf("%f", &nova_nota[i][7]);
			fflush(stdin);			
		}	
	}
	
	else{
		return;
	}
	
	printf("\nNova equipe 1:\n");
	for(i=0; i<7; i++){
		printf("%s", nova_equipe1);
	}
	printf("\nNova equipe 2:\n");
	for(i=0; i<7; i++){
		printf("%s\n", nova_equipe2);
	}
}


void PontoAdicional(char sexo[2][6], float notas[2][6]){
	int i, j;
	
	for(i=0; i<2; i++){
		for(j=0; j<6; j++){
			if (sexo[i][j]== 'F'){
				notas[i][j]++;
			}
}

void ProcessoSeletivo(char equipe_1[6][31], char equipe_2[6][31], char sexo[2][6], float notas[2][6]){
	int i, j;
	int aux=0;
	char projeto[12][31];
	
	printf("\nAlunas que podem participar do projeto:\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<6; j++){
			if (i==0 && sexo[0][j]=='F' && notas[0][j]>=8){
				strcpy(projeto[aux], equipe_1[j]);
				aux++;
			}
			if (i==1 && sexo[1][j]=='F' && notas[1][j]>=8){
				strcpy(projeto[aux], equipe_2[j]);
				aux++;
			}
		}
	}
	
	for(i=0; i<12; i++){
		puts(projeto[i]);
	}
	
}

void QntdMulheres(char sexo[2][6]){
	int i, j;
	int contM1=0, contM2=0;
	
	for(i=0; i<2; i++){
		for(j=0; j<6; j++){
			if (sexo[0][j] == 'F'){
				contM1++;
			}
			if (sexo[1][j] == 'F'){
				contM2++;
			}
		}
	}
	
	if (contM1 == contM2){
		printf("As duas equipes tem a mesma quantidade de mulheres (%d)", contM1);
	}
	else if (contM1 > contM2){
		printf("A equipe 1 tem a maior quantidade de mulheres (%d mulheres)", contM1);
	}
	else{
		printf("A equipe 2 tem a maior quantidade de mulheres (%d mulheres)", contM2);
	}
	
}

int main(){
	int i, j;
	char equipe_1[6][31];
	char equipe_2[6][31];
	char sexo[2][6];
	float notas[2][6];
	
	for(i=0; i<2; i++){
		for(j=0; j<6; j++){
			if (i == 0){
				printf("Nome do aluno %d da equipe 1: ", j+1);
				scanf("%30[^\n]s", equipe_1[i]);
				fflush(stdin);
			}
			else if (i ==1){
				printf("Nome do aluno %d da equipe 2: ", j+1);
				scanf("%30[^\n]s", equipe_2[i]);
				fflush(stdin);
			}
			
			printf("Sexo do aluno %d da equipe %d [F] ou [M]: ", j+1, i+1);
			scanf(" %c", &sexo[i][j]);
			
			printf("Nota do aluno %d da equipe %d: ", j+1, i+1);
			scanf("%f", &notas[i][j]);
			fflush(stdin);
			
			printf("\n");
		}
	}
	
	QntdMulheres(sexo);
	ProcessoSeletivo(equipe_1, equipe_2, sexo, notas);
	PontoAdicional(sexo, notas);
	AdicionarAluno(equipe_1, equipe_2, sexo, notas);
	
	return 0;
}
