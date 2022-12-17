#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;

    printf("Escreva o raio do circulo:\n");
    scanf("%f", &raio);

    area =3.14*pow(raio,2);
    printf("A area desse circulo e %.2f", area);

	return 0;
}

