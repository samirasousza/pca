#include <stdio.h>
#include <stdlib.h>

int** alocaLeMatrizInt(int m, int n){

    int **mat = (int **) malloc(m * sizeof(int*));
	
	int i, j;
	
    for(i = 0; i < m; i++){
        *(mat+i) = (int *) malloc(n * sizeof(int));
    }

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d", (*(mat+i))+j);
        }
    }

    return mat;
}

int main(){
    int m, n;
    printf("Digite a quantidade de linhas(m):\n");
    scanf("%d", &m);
    printf("Digite a quantidade de colunas(n):\n");
    scanf("%d", &n);

    printf("Agora digite os elementos da matriz:\n");
    int **mat = alocaLeMatrizInt(m, n);
    int cont = 0;

    printf("\n");
    printf("Imprimindo com aritimetica de ponteiros:\n");
    
    int **plinhas;
    
    for(plinhas = mat; plinhas <= mat+m-1; plinhas++){
    	
    	int *pcolunas;
    	
        for(pcolunas = *plinhas; pcolunas <= (*plinhas)+n-1; pcolunas++){
            if(cont == n-1){
                printf("%d\n", *pcolunas);
            }
            else{
                printf("%d ", *pcolunas);
                cont++;
            }
        }
        cont = 0;
    }
    printf("\n");

    printf("Imprimindo com indexes:\n");
    
    int i, j;
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(j == n-1){
                printf("%d\n", mat[i][j]);
            }
            else{
                printf("%d ", mat[i][j]);
            }
        }
    }

    /*liberando memória:*/
    for (i = 0; i < m; i++){
        free(*(mat+i));
    }
    free(mat);

    return 0;
}
