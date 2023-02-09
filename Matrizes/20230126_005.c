#include <stdio.h>
#include <stdlib.h>

void exceto_principal (int matriz[][5])
{
	int i, j;
	
	printf("\nTudo, exceto a diagonal principal:\n");
	
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			if (i != j)
			{
				printf("%d ", matriz[i][j]);
			}
			else 
			{
				printf("- ");
			}
		}
		printf("\n");
	}
	
}

void soma_coluna (int matriz[][5])
{
	int i;
	int soma = 0;
	int coluna = 2;
	
	for (i=0; i<5; i++)
	{
		soma += matriz[i][coluna-1];
	}
	printf("\nSoma da coluna %d: %d\n", coluna, soma);
}

void soma_linha (int matriz[][5])
{
	int i;
	int soma = 0;
	int linha = 4;
	
	for (i=0; i<5; i++)
	{
		soma += matriz[linha-1][i];
	}
	printf("\nSoma da linha %d: %d\n", linha, soma);
}

void diagonal_secundaria(int matriz[][5])
{
	int i, j;
	int aux = 4;
	
	printf("\nDiagonal Secundaria:\n");
	for (i=0; i<5; i++)
	{
		for (j=0; j<=aux; j++)
		{
			printf(" ");
		}
		printf("%d\n", matriz[i][aux]);
		aux--;
	}
}

void diagonal_principal (int matriz[][5])
{
	int i, j;
	int aux = 0;
	
	printf("\nDiagonal Primaria:\n");
	
	for (i=0; i<5; i++)
	{
		printf("%d\n", matriz[i][aux]);
		aux++;
		for (j=0; j<=aux; j++)
		{
			printf(" ");
		}
	}
}

int main ()
{
	int i, j;

    int matriz[5][5] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}, {4, 4, 4, 4, 4}, {5, 5, 5, 5, 5}};

    printf("Matriz:\n");

    for (i=0; i<5; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    
    diagonal_principal(matriz);
    diagonal_secundaria(matriz);
    soma_linha(matriz);
    soma_coluna(matriz);
    exceto_principal(matriz);
    
    return 0;
    
}
