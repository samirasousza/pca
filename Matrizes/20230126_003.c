#include <stdio.h>
#include <stdlib.h>

void multiplicacao_escalar (int matriz[][3], int resultado[][3], int escalar)
{
    int i, j;

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            resultado[i][j] = matriz[i][j] * escalar;
        }
    }
}

int main()
{
    int i, j;

    int matriz[3][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int resultado[3][3];
    int escalar = 2;

    printf("Matriz:\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }

    multiplicacao_escalar (matriz, resultado, escalar);

    printf("\nMatriz x %d:\n", escalar);

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d  ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
