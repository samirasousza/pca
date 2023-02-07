#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int transformar(int binario){
    int decimal=0;
    int cont=0;
    int aux;
	
	while (binario>0) {
			aux=binario%10;
			
			decimal+=aux*pow(2, cont);
			cont++;
			binario=binario/10;
	}
	
	return decimal;

}


int main(){
    int binario;

    printf("Escreva um numero binario: ");
    scanf("%d", &binario);

    printf("\nNumero binario: %d ==> %d decimal", binario, transformar(binario));
	
	return 0;
}
