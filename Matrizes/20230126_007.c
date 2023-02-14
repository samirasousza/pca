#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j;
	
    printf("Digite a ordem da matriz quadrada onde cada elemento\n");
    printf("aij representa o custo da viagem da cidade i para a j:\n");
    int n;
    scanf("%d", &n);

    printf("Agora digite a matriz:\n");
    int matriz[300][300];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite a quantidade de itinerários:\n");
    int itinerarios;
    scanf("%d", &itinerarios);

    int custo = 0;
    for(i=1;i<=itinerarios;i++){
        printf("Digite o número de cidades no itinerario %d\n", i);
        int k;
        scanf("%d", &k);

        printf("digite as cidades do itinerário:\n");
        int cidade1, cidade2;
        int soma = 0;
        scanf("%d", &cidade1);
        for (j=1;j<k;j++){
            scanf("%d", &cidade2);
            soma = soma + matriz[cidade1][cidade2];
            cidade1 = cidade2;
        }
        printf("O custo do itinerário %d é: %d\n", i, soma);
        soma = 0;
    }

    return 0;
}
