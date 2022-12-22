#include <stdio.h>

int main() {
    float nota1,nota2, nota3, nota4, media;

    printf("Escreva a nota 1:\n");
    scanf("%f", &nota1);

    printf("Escreva a nota 2:\n");
    scanf("%f", &nota2);

    printf("Escreva a nota 3:\n");
    scanf("%f", &nota3);

    printf("Escreva a nota 4:\n");
    scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;
    printf("A media do bimestre e %.2f", media);

	return 0;
}

