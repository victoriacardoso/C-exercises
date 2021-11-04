/*Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o
aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e
o salário final*/

#include <stdio.h>

int main()
{
	
	float SalarioInicial, SalarioAumento, SalarioFinal;
	float aumento, imposto;
	
	printf("Informe o valor do salario: ");
	scanf("%f", &SalarioInicial);
	
	aumento = SalarioInicial*0.15;
	SalarioAumento = SalarioInicial + aumento;
	
	imposto = SalarioAumento * 0.08;
	SalarioFinal = SalarioAumento - imposto;
	
	printf("Salario Inicial: %.2f\n", SalarioInicial);
	printf("Salario com Aumento: %.2f\n", SalarioAumento);
	printf("Salario Final: %.2f\n", SalarioFinal);
	
	return 0;
}
