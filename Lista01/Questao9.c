/*Escreva um programa que converta um intervalo de tempo dado em minutos, em horas,
minutos e segundos. Por exemplo, se o tempo dado for 145,87 min, o programa deve
fornecer 2h 25min 52,2s.*/

#include <stdio.h>

int main()
{	

	int hora = 0, min = 0;
	float seg = 0;
	float tempo;
	
	printf("Informe o tempo em minutos: ");
	scanf("%f", &tempo);

	hora = (int)(tempo/60);
	min = (int) (tempo - (hora*60));
	seg = (tempo*60) - (min*60) - (hora*3600);
	
	printf("%d horas, %d minutos, %.1f segundos\n", hora, min, seg);
	
	return 0;
}
