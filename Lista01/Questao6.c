/*A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas
fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada
fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100
gramas, faça um algoritmo em que o dono forneça a quantidade de sanduíches a fazer,
e a máquina informe as quantidades (em quilos) de queijo, presunto e carne necessários
para compra.*/

#include <stdio.h>

int main()
{
	
	int QtdSanduiches;
	float QtdQueijo, QtdPresunto, QtdHamburguer;
	
	printf("Informe a quantidade de sanduiches: ");
	scanf("%d", &QtdSanduiches);
	
	QtdQueijo = (float)(QtdSanduiches * 100)/1000;
	QtdPresunto = (float)(QtdSanduiches * 50)/1000;
	QtdHamburguer = (float)(QtdSanduiches*100)/1000;
	
	printf("Sera preciso %.3f kg de queijo, %.3f kg de presunto e %.3f kg de hamburguer.", QtdQueijo, QtdPresunto, QtdHamburguer);
	
	return 0;
}
