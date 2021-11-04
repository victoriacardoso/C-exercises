/*Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os
seguintes dados: sexo (0-feminino, 1-masculino), idade e altura. Faça um algoritmo que
leia as informações coletadas e mostre as seguintes informações:
a. a maior e a menor idade do grupo ;
b. média da idade do grupo;
c. média da altura das mulheres;
d. média da idade dos homens;
e. percentual de pessoas com idade entre 18 e 35 anos (inclusive).*/

#include <stdio.h>

typedef int boolean;
#define true 1
#define false 0

int main()
{
	
	int i, sexo, idade;
	float altura;
	int MaiorIdade= 0, MenorIdade = 0, SomaIdadeHomens = 0;  
	int QtdMulheres = 0, QtdHomens = 0, QtdPercentual = 0; 
	float  MediaIdade = 0, SomaIdade = 0;
	float SomaAlturaMulheres = 0, MediaAlturaMulheres = 0;
	float MediaIdadeHomens = 0, percentual = 0;
	boolean PrimeiraVez = true;
	
	for(i=0; i<1000; i++)
	{
		printf("\nInforme o sexo (0-feminino/1-masculino): ");
		scanf("%d", &sexo);
		
		printf("Informe a idade: ");
		scanf("%d", &idade);
		
		printf("Informe a altura: ");
		scanf("%f", &altura);
		
		SomaIdade += idade;
		
		if(PrimeiraVez)
		{
			MenorIdade = idade;
			MaiorIdade = idade;
			PrimeiraVez = false;
		}
		else
		{
			if(idade>MaiorIdade)
			{
				MaiorIdade = idade;
			}
			else
			{
				if(idade<MenorIdade)
				{
					MenorIdade = idade;
				}
			}
		}	
		if(sexo == 0)
		{
			SomaAlturaMulheres+=altura;
			QtdMulheres++;
		}
		else
		{
			if(sexo == 1)
			{
				SomaIdadeHomens+= idade;
				QtdHomens++;
			}	
		}
	
		if((idade>= 18) && (idade<=35))
		{
			QtdPercentual++;
		}
	} 
	MediaIdade = (float)SomaIdade/1000;
	MediaAlturaMulheres = (float)SomaAlturaMulheres/QtdMulheres;
	MediaIdadeHomens = (float)SomaIdadeHomens/QtdHomens;
	percentual = (float)(QtdPercentual*100)/1000;
		
	printf("\nMaior idade: %d\n", MaiorIdade);
	printf("Menor idade: %d\n", MenorIdade);
	printf("Media da idade do grupo: %.2f\n", MediaIdade);
	printf("Media da altura das mulheres: %.2f\n", MediaAlturaMulheres);
	printf("Media da idade dos homens: %.2f\n", MediaIdadeHomens);
	printf("Percentual de pessoas com idade entre 18 e 35 anos: %.2f %%\n", percentual);

	
	return 0;
}
