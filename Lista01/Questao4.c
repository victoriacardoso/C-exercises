/*Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça
um algoritmo para converter este tempo em anos, meses e dias. Assuma que cada mês
possui sempre 30 dias.*/

#include <stdio.h>

int main()
{
	int QtdAnos = 0, QtdMeses = 0; 
	int QtdDias = 0;
	
	printf("Informe a quantidade de dias: ");
	scanf("%d", &QtdDias);
	
	if(QtdDias>=360)
	{
		QtdAnos = QtdDias/360;
		QtdDias = QtdDias - (QtdAnos*360);
	}
	if(QtdDias>=30)
	{
		QtdMeses = QtdDias/30;
		QtdDias = QtdDias - (QtdMeses*30);
	}
	
	printf("O tempo de trabalho sem acidentes e de %d anos, %d meses, %d dias", QtdAnos, QtdMeses, QtdDias);
	
	return 0;
}
