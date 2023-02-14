#include <stdio.h>
#include <stdlib.h>

int mult_matr(int m1[][200], int m2[][200], int multi[][200], int l1, int c1, int l2, int c2){
	int i, j, a; 
	
    if(c1!=l2){
        return 0;
    }

    else{
        int aux = 0;

        for (i=0; i<l1; i++){
            for (j=0; j<c2; j++){
                for(a=0; a<c1; a++){
                    aux = aux+(m1[i][a]*m2[a][j]);
                }
                printf("aux %d%d = %d\n", i, j, aux);
                multi[i][j] = aux;
                aux = 0;
            }
        }
        
        return 1;
    }
}

int main(){
	int i, j;

    printf("Vamos muiltiplicar 2 matrizes. primeiro digite as dimensões delas:\n");

    int l1, c1, l2, c2;

    printf ("Digite o número de linhas da matriz m1:\n");
    scanf("%d", &l1);

    printf ("Digite o número de colunas da matriz m1:\n");
    scanf("%d", &c1);

    printf ("Digite o número de linhas da matriz m2:\n");
    scanf("%d", &l2);

    printf ("Digite o número de colunas da matriz m2:\n");
    scanf("%d", &c2);

    int m1[l1][200];
    int m2[l2][200];

    printf ("Digite a matriz m1:\n");

    for (i=0; i<l1; i++){
        for (j=0; j<c1; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    printf ("Digite a matriz m2:\n");

    for (i=0; i<l2; i++){
        for (j=0; j<c2; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    int multi[c1][200];

    if(!(mult_matr(m1, m2, multi, l1, c1, l2, c2))){printf("Não é possível multiplicar as matrizes.\n");}

    else{
        printf("\nA matriz gerada foi:");

        for (i=0; i<l1; i++){
            printf("\n");
            for (j=0; j<c2; j++){
                printf("%d ", multi[i][j]);
            }
        }

    }

    return 0;
    
}
