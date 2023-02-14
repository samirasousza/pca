#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j;
	
    printf("Digite uma matriz quadrada que eu direi se ela � um quadrado m�gico.\n");

    printf("Primeiro digite a ordem da matriz:\n");
    int n;
    scanf("%d", &n);

    printf("Agora digite a matriz:\n");
    int matriz[300][300];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int magico1 = 0;
    int magico2 = 0;
    int is_magic = 1;

    // Verificando a soma das linhas:
    for(i=0;i<n;i++){magico1=magico1+matriz[0][i];}
    printf("linha: magico1 %d\n", magico1);

    for(i=1;i<n;i++){
        for(j=0;j<n;j++){magico2 = magico2 + matriz[i][j];}
        printf("linha: magico2 %d\n", magico2);
        if(magico1 != magico2){is_magic=0;}
        magico2 = 0;
    }
    magico1 = 0;

    // Verificando a soma das colunas:
    if(is_magic == 1){
        for(i=0;i<n;i++){magico1=magico1+matriz[i][0];}
        printf("coluna: magico1 %d\n", magico1);

        for(i=1;i<n;i++){
            for(j=0;j<n;j++){magico2 = magico2 + matriz[j][i];}
            printf("coluna: magico2 %d\n", magico2);
            if(magico1 != magico2){is_magic=0;}
            magico2 = 0;
        }
        magico1 = 0;

        // Verificando a soma da diagonal principal e secund�ria:
        if(is_magic == 1){
            for(i=0;i<n;i++){magico1=magico1+matriz[i][i];}
            for(i=n-1;i>=0;i--){magico2=magico2+matriz[i][n-i-1];}

            if(magico1 != magico2){is_magic=0;}

            if(is_magic){printf("A matriz dada e um quadrado m�gico");}
            else{printf("A matriz dada nao e um quadrado m�gico.\n");}
        }
        else{printf("A matriz dada nao e um quadrado m�gico.\n");}
    }
    else{printf("A matriz dada nao e um quadrado m�gico.\n");}

    return 0;
}
