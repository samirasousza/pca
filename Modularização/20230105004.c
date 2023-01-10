#include <stdio.h>
#include <stdlib.h>

int fatorial (int n) {
    int fat;

    for (fat=1; n>1; n--) {
        fat*=n;
    }

    return fat;
}

int main () {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    printf("\n%d! = %d", n, fatorial(n));

    return;
}
