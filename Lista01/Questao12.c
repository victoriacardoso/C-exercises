/*Fa�a um algoritmo para ler base e altura e calcular a �rea de 5 tri�ngulos. No final
escreva a m�dia das �reas calculadas. F�rmula: �rea = (Base * Altura) / 2*/

#include <stdio.h>

int main(){
	
	float base, altura;
	float area = 0, SomaAreas = 0, MediaAreas = 0;
	int i;
	
	for(i=1; i<=5; i++){
		printf("\nTriangulo n� %d\n", i);
		
		printf("Informe a base do triangulo: ");
		scanf("%f", &base);
		
		printf("Informe a altura do triangulo: ");
		scanf("%f", &altura);
		
		area = (base*altura)/2;
		SomaAreas += area;
	}
	MediaAreas = SomaAreas/5;
	
	printf("\nA media das areas calculadas e: %.2f", MediaAreas);
		
	return 0;
}
