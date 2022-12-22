#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota1, nota2, nota3, maior, menor, media;
	
	printf("Digite as notas do exercicio:");
	scanf("%f", &nota1);
	
	maior = nota1;
	menor = nota1;
	
	scanf("%f", &nota2);
	
	if (nota2>maior){
		
		maior = nota2;
	}
	
	else{
		
		if(nota2<menor){
			menor = nota2;
		}
	}
	
	scanf("%f", &nota3);
	
	if (nota3>maior){
		
		maior = nota3;
	}
	
	else{
		
		if(nota3<menor){
			menor = nota3;
		}
	}
	
	media = (nota1+nota2+nota3)/3;
	
	printf("Maior nota: %.2f\n", maior);
	printf("Menor nota: %.2f\n", menor);
	printf("Media: %.2f\n", media);
	
}
