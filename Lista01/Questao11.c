/*Escrever um algoritmo que lê 8 valores, um de cada vez, e conta quantos destes
valores são negativos, escrevendo esta informação.*/

#include <stdio.h>

int main()
{
	
	float num;
	int i;
	int QtdNumNeg =0;
	
	for (i=0; i<8; i++)
	{
		printf("Informe um numero: ");
		scanf("%f", &num);
		
		if(num<0)
		{
			QtdNumNeg ++;
		}
	}
	printf("%d numeros negativos.", QtdNumNeg);
		
	return 0;
}
