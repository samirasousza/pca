#include <stdio.h>
#include <stdlib.h>

int somar_array(int array1[], int array2[], int soma[], int tam1, int tam2, int tam_soma){
    if(tam1 != tam2){
	return 0;
	}

    else{
    	int *psoma = soma;
        int *parray1 = array1;
        int *parray2 = array2;
        int continua = 0;
        
        while(continua < tam_soma/sizeof(int)){
            *psoma = *parray1 + *parray2;
            psoma++;
            parray1++;
            parray2++;
            continua++;
        }
        return 1;
    }
}

int main(){
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {4, 3, 2, 1, 0};
    int soma[5];

    int resultado = somar_array(array1, array2, soma, sizeof(array1), sizeof(array2), sizeof(soma));
    printf("Resultado da funcao: %d\n", resultado);
	
	int *parray;
	
    if(resultado == 1){
        printf("O array de soma:\n");
        int tam_soma = sizeof(soma)/sizeof(int);
        
        for(parray = soma; parray <= &soma[tam_soma - 1]; parray++){
            if(parray == &soma[tam_soma - 1]){
			printf("%d\n", *parray);
			}
            else{
			printf("%d, ", *parray);
			}
        }
    }
    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
