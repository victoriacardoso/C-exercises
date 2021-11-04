/*Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que: A = ((base
maior + base menor) * altura)/2.*/

#include <stdio.h>

int main()
{
	
	float BaseMaior, BaseMenor, altura, area;
	
	printf("Base maior: ");
	scanf("%f", &BaseMaior);
	printf("Base menor: ");
	scanf("%f", &BaseMenor);
	printf("Altura: ");
	scanf("%f", &altura);

	area = ((BaseMaior + BaseMenor)*altura)/2;
 
	printf("A area do trapezio e: %.2f\n", area);
	
	return 0;
}
