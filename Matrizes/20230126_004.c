#include <stdio.h>
#include <stdlib.h>

void localizacao (int matriz[3][3], int num)
{
    int i, j;
    int aux = 0;

    printf("\nLocalizacao:\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if (matriz[i][j] == num)
            {
                printf("a%d%d", i+1, j+1);
                aux = 1;
            }
        }
    }
    if (aux == 0)
    {
    	printf("Nao encontrado"); 
	}
}

int main()
{
    int num, i, j;
    int matriz[3][3];

    printf("Escreva os valores da matriz:\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("a%d%d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n\nEscreva um numero pra ser localizado na matriz: ");
    scanf("%d", num);

    localizacao(matriz, num);

    return 0;
}
