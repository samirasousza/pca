#include <stdio.h>
#include <stdlib.h>

int fibonacci (int n) {
    int f1=0, f2=1, fn, i;

    for (i=0; i<n-1; i++) {
    fn = f1 + f2;
    f1 = f2;
    f2 = fn;
    }

    printf("%d", fn);
}

int main () {
    int n;

    printf("Digite qual posicao de fibonacci voce quer: ");
    scanf("%d", &n);

    fibonacci(n);

}
