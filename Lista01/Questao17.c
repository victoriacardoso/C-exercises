/*Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a
média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as
duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e uma
mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a média
for menor que 5. Repita a operação até que o código lido seja negativo. Ao final, mostre
a média geral.*/

#include <stdio.h>

int main(){
	
	int cod;
	float n1, n2, n3;
	float media = 0, MaiorNota = 0, MenorNota = 0, SomaGeral = 0, QtdGeral = 0, MediaGeral = 0;
	
	printf("Informe o codigo: ");
	scanf("%d", &cod);
	
	while(cod>=0)
	{
		printf("Informe a primeira nota: ");
		scanf("%f", &n1);
		
		printf("Informe a segunda nota: ");
		scanf("%f", &n2);
		
		printf("Informe a terceira nota: ");
		scanf("%f", &n3);
		
		if(n1>=n2 && n1>=n3)
		{
			MaiorNota = n1;
			MenorNota = n2 + n3;
		}
		else
		{
			if(n2>=n1 && n2>=n3)
			{
				MaiorNota = n2;
				MenorNota = n1 + n3;
			}
			else
			{
				MaiorNota = n3; 
				MenorNota = n1 + n2;
			}
		}
		
		media = (MaiorNota * 4 + MenorNota*3)/10;
		
		if(media>=5)
		{
			printf("\nAprovado\n");
		}
		else
		{
			printf("\nReprovado\n");
		}
		SomaGeral += media;
		QtdGeral ++;
		
		printf("\nInforme o codigo: ");
		scanf("%d", &cod);
	}
	if(QtdGeral != 0)
	{
		MediaGeral = (float)SomaGeral/QtdGeral;
	}
	printf("Media Geral: %.1f", MediaGeral);
	
	
	return 0;
}
