#include <stdio.h>

int main() {
    float area, dobro;

    printf("Digite a area do quadrado:\n");
    scanf("%f", &area);

    dobro = area*2;
    printf("O dobro dessa area e %.2f", dobro);
    
    return 0;
}

