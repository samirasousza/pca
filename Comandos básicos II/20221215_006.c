#include <stdio.h>

int main() {
    float valor, salario;
    int hora;

    printf("Digite quanto voce ganha por hora:\n");
    scanf("%f", &valor);
    
    printf("Digite o numero de horas trabalhadas por mes:\n");
    scanf("%d", &hora);

    salario = valor*hora;
    printf("O salario total no referido mes e R$%.2f", salario);
    
    return 0;
}
