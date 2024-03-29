#include <stdio.h>
#include <stdlib.h>

int contar (int n, int d) {
	int cont=0;
	
	while (n>0) {
		if (n%10==d) {
			cont++;
		}
		n=n/10;
	}
	return cont;
}

int permutacao (int a, int b){
    int aux, d, permut = 0;

    if (a > b){
		aux = a;
	}
    else{
		aux = b;
	}

    d = aux%10;

    while (aux > 0){
        if (contar(a, d) != contar(b, d)){
            permut++;
            break;
        }

        aux = aux/10;
        d = aux%10;
    }

    return !permut;
}

int main () {
	int a, b, permut;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	
	printf("\nDigite um numero de entre 0 e 9: ");
	scanf("%d", &b);
	
	permut = permutacao(a, b);

    if (permut){
		printf("\nO numero %d e uma permutacao de %d\n", b, a);
	}
    else{
		printf("\nO numero %d nao e uma permutacao de %d\n", b, a);
		}

}

