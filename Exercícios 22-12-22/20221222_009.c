#include <stdio.h>
#include <stdlib.h>

int main(){
	int m, n, x, y, i, j, maior=0, aux=0;
	
    printf("Dada a expressao xy - x^2 + y, direi quais numeros\n");
    printf("darao valor maximo a partir de dois numeros naturais\n");
    printf("n e m, onde x<=m e y<=n\n\n");

    printf("Digite o valor de m: ");
    scanf("%d", &m);
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    for (i=0; i<=m; i++){

        for (j=0; j<=n; j++){
            aux = (i*j)-(i*i)+j;

            if (aux>maior){
                x = i;
                y = j;
                maior = aux;
            }
        }
    }

    printf("O valor maximo encontrado foi: %d\n", maior);
    printf("O valor de x foi: %d\n", x);
    printf("O valor de y foi: %d\n", y);

}
