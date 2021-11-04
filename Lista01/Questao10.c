/*Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
no sentido de que as notas de menor valor fossem distribuídas em número mínimo
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria
indicar uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas
notas de R$ 1,00. Escreva um programa que receba o valor da quantia solicitada e
retorne a distribuição das notas de acordo com o critério da distribuição ótima.*/

#include <stdio.h>

int main()
{
	
	int N50, N10, N5, N1, r50, r10, r5, quantia;
	
	printf("Informe a quantia: ");
	scanf("%d", &quantia);
	
	N50 = quantia/50;
	r50 = quantia%50;
	
	N10 = r50/10 ;
	r10 = r50 % 10;
	
	N5 = r10/5;
	r5 = r10%5;
	
	N1 = r5;
	
	printf("%d notas de 50\n", N50);
	printf("%d notas de 10\n", N10);
	printf("%d notas de 5\n", N5);
	printf("%d notas de 1\n", N1);


	return 0;
}
