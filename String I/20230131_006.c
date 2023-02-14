#include <stdio.h>
#include <string.h>
#include <string.h>

int main(){
    printf("Digite uma palavra ou frase e direi se ela � um pal�ndromo:\n");
    char frase[401];
    scanf("%400[^\n]", frase);

    int count = 0;
    int tam = strlen(frase);
    int eh_palindromo = 1;

    for(int i=tam-1; i>=0; i--){
        if(frase[i] == ' '){
            i--;
        }
        if(frase[count] == ' '){
            count++;
        }
        if(frase[count]<97){
            frase[count] = frase[count] + 32;
        }
        if(frase[i]<97){
            frase[i] = frase[i] + 32;
        }
        if(frase[count] != frase[i]){
            eh_palindromo = 0;
            break;
        }
        count++;
    }

    if(eh_palindromo){printf("A frase inserida � um pal�ndromo.\n");}
    else{printf("A frase inserida n�o � um pal�ndromo.\n");}

    return 0;
}
