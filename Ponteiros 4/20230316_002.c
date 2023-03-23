#include <stdio.h>
#include <stdlib.h>

int main(){
    int m, n;
    printf("Digite a quantidade de linhas(m):\n");
    scanf("%d", &m);
    printf("Digite a quantidade de colunas(n):\n");
    scanf("%d", &n);

    printf("Agora digite os elementos da matriz:\n");
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
    
    int cont = 0;

    printf("\n");
    printf("Imprimindo com aritimetica de ponteiros:\n");
    
    
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            if(cont == n-1){
                printf("%d\n", (*(*(mat +i))) + j);
            }
            else{
                printf("%d ", (*(*(mat +i))) + j);
                cont++;
            }
        }
        cont = 0;
    }
    printf("\n");

    printf("Imprimindo com indexes:\n");
    
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
