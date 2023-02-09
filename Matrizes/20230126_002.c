#include <stdio.h>
#include <stdlib.h>

void soma_matrizes (int m1[][5], int m2[][5], int L1, int C1, int L2, int C2)
{
    int i, j;

    if (L1 != L2 || C1 != C2)
    {
        printf("\nAs matrizes nao tem a mesma ordem\n");
        return;
    }

    printf("\nSoma das matrizes:\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%d  ", m1[i][j] + m2[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j;

    int m1[3][5] = {{1, 1, 1, 1, 1}, {2, 2, 2, 2, 2}, {3, 3, 3, 3, 3}};
    int m2[3][5] = {{4, 4, 4, 4, 4}, {3, 3, 3, 3, 3}, {2, 2, 2, 2, 2}};

    printf("Matriz 1:\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%d  ", m1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz 2:\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<5; j++)
        {
            printf("%d  ", m2[i][j]);
        }
        printf("\n");
    }

    soma_matrizes(m1, m2, 3, 5, 3, 5);

    return 0;
}
