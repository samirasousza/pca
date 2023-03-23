#include <stdio.h>
#include <stdlib.h>

double** alocaLeMatrizReal(int m, int n){

    double **mat = (double **) malloc(m * sizeof(double*));
	
	int i, j;
	
    for(i = 0; i < m; i++){
        *(mat+i) = (double *) malloc(n * sizeof(double));
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%lf", (*(mat+i))+j);
        }
    }

    return mat;
}

int main(){
    int m1, n1, m2, n2;
    printf("Vamos somar 2 matrizes compostas por números reais.\n");
    printf("Primeiro insira as informações da matriz 1\n\n");
    printf("Digite a quantidade de linhas da matriz 1(m1):\n");
    scanf("%d", &m1);
    printf("Digite a quantidade de colunas da matriz 1(n1):\n");
    scanf("%d", &n1);

    printf("Agora digite os elementos da matriz 1:\n");
    double **mat1 = alocaLeMatrizReal(m1, n1);
    printf("\n");

    printf("Agora insira as informações da segunda matriz:\n\n");
    printf("Digite a quantidade de linhas da matriz 2(m2):\n");
    scanf("%d", &m2);
    while(m2 != m1){
        printf("O número de linhas precisa ser igual ao da matriz anterior.\n");
        printf("Insira novamente:\n");
        scanf("%d", &m2);
    }

    printf("Digite a quantidade de colunas da matriz 2(n2):\n");
    scanf("%d", &n2);
    while(n2 != n1){
        printf("O número de colunas precisa ser igual ao da matriz anterior.\n");
        printf("Insira novamente:\n");
        scanf("%d", &n2);
    }

    printf("Agora digite os elementos da matriz 2:\n");
    double **mat2 = alocaLeMatrizReal(m2, n2);
    printf("\n");

	int i, j;

    printf("Mostrando a soma das 2 matrizes:\n");
    for (i = 0; i < m1; i++){
        for (j = 0; j < n1; j++){
            if(j == n1-1){
                printf("%lf\n", mat1[i][j]+mat2[i][j]);
            }
            else{
                printf("%lf ", mat1[i][j]+mat2[i][j]);
            }
        }
    }

    /*liberando memória:*/
    for (i = 0; i < m1; i++){
        free(mat1[i]);
        free(*(mat2+i));
    }
    free(mat1);
    free(mat2);

    return 0;
}
