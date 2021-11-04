/*Faça um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o
fatorial de N (N!).*/

#include <stdio.h>

int main()
{
	int N, i=1;
	int fatorial = 1;
	
	printf("Informe um numero inteiro e positivo: ");
	scanf("%d", &N);
	
	while(i<=N)
	{
		fatorial*= i;
		i++;
	}
	printf("Fatorial de %d e igual a: %d", N, fatorial);
	
	
	return 0;
}
