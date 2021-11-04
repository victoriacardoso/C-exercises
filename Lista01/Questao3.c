/*Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua
média ponderada (as notas tem pesos respectivos de 2, 3 e 5).*/

#include <stdio.h>

int main()
{

	float nota1, nota2, nota3, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%f", &nota2);
	printf("Informe a terceira nota: ");
	scanf("%f", &nota3);

	media = (nota1*2 + nota2*3 + nota3*5)/10;
	
	printf("Media ponderada: %.1f", media);
	
	return 0;
}
