/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.*/

#include <stdio.h>

int main(){
	
	float AlturaChico = 1.50, AlturaZe = 1.10; 
	int anos = 0;
	
	while(AlturaZe<=AlturaChico){
		AlturaChico += 0.02;
		AlturaZe += 0.03;
		anos ++;
	}
	printf("%d anos", anos);
		
	return 0;
}
