#include <stdio.h>

int main() {
	float valor, salario_bruto, imposto, inss, sindicato, salario_liquido;
	int horas;
	
	printf("Digite o valor ganho por hora:\n");
	scanf("%f", &valor);
	
	printf("Digite o numero de horas trabalhadas por mes:\n");
	scanf("%d", &horas);
	
	salario_bruto = valor*horas;
	imposto = salario_bruto*0.11;
	inss = salario_bruto*0.08;
	sindicato = salario_bruto*0.05;
	salario_liquido = salario_bruto-imposto-inss-sindicato;
	
	printf("Salario bruto: R$%.2f\n", salario_bruto);
	printf("INSS: R$%.2f\n", inss);
	printf("Sindicato: R$%.2f\n", sindicato);
	printf("Salario liquido: R$%.2f\n", salario_liquido);
	
	return 0;
}
