#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define Equipes 5
#define Alunos 4

int main(){
	int i, j;
	
    char alunos[Equipes][Alunos][120];
    char consultar, pesquisar[120], sobrenome[60];
    int numEquipe;

    for(i = 0; i < Equipes; i++){
        printf("Informe os Alunos da Equipe %d:\n", i+1);

        for(j = 0; j < Alunos; j++){
            printf("%do Aluno - Primeiro Nome: ", j+1);
            scanf("%s", alunos[i][j]);
            printf("%do Aluno - Sobrenome: ", j+1);
            scanf("%s", sobrenome);
            strcat(alunos[i][j], " ");
            strcat(alunos[i][j], sobrenome);
        }
        printf("\n");
    }

    printf("Deseja consultar a equipe de um aluno? S/N\n");
    scanf(" %c", &consultar);

    while(toupper(consultar)=='S'){
        printf("Insira o nome de um aluno:\n");
        scanf("%s", pesquisar);
        printf("Insira o sobrenome do aluno: ");
        scanf("%s", sobrenome);
        strcat(pesquisar, " ");
        strcat(pesquisar, sobrenome);
        numEquipe = 0;

        for(i = 0; i < Equipes; i++){
            for(j = 0; j < Alunos; j++){
                if(strcmp(alunos[i][j], pesquisar) == 0){
                    numEquipe = i+1;
                    break;
                }
            }
        }

        if(numEquipe!=0)
            printf("%s eh da equipe %d\n", pesquisar, numEquipe);
        else
            printf("Aluno nao encontrado\n");

        printf("Deseja consultar de outro aluno? S/N\n");
        scanf(" %c", &consultar);
    }
    return 0;
}
