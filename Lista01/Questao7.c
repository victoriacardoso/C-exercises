/*Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado.*/

#include <stdio.h>

int main()
{
	
	float peso, PesoEmagrecer, PesoEngordar;
	float emagrecer, engordar;
	
	printf("Informe o peso: ");
	scanf("%f", &peso);
	
	engordar = peso * 0.15;
	emagrecer = peso * 0.20;
	
	PesoEngordar = peso + engordar;
	PesoEmagrecer = peso - emagrecer;
	
	printf("Se engordar 15 %%, o peso sera: %.3f kg \n", PesoEngordar);
	printf("Se emagrecer 20 %%, o peso sera: %.3f kg \n", PesoEmagrecer);

	
	return 0;
}
