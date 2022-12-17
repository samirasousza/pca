#include <stdio.h>

int main() {
    float metros, centimetro;

    printf("Escreva o valor em metros:\n");
    scanf("%f", &metros);

    centimetro = metros*100;
    printf("O valor %.2f em metros e %.2f centimetros", metros, centimetro);

	return 0;
}

