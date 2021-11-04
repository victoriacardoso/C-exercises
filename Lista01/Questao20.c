/*Foi feita uma estatística nas 200 principais cidades brasileiras para coletar dados sobre
acidentes de trânsito. Foram obtidos os seguintes dados:
código da cidade ;
estado (RS, SC, PR, SP, RJ, ...);
número de veículos de passeio (em 2012);
número de acidentes de trânsito com vítimas (em 2012) .
Deseja-se saber:
a. qual o maior e o menor índice de acidentes de trânsito e a que cidades
pertencem;
b. qual a média de veículos nas cidades brasileiras;
c. qual a média de acidentes com vítimas entre as cidades do Rio Grande do Sul.*/

#include <stdio.h>
#include <string.h>

typedef int boolean;
#define true 1
#define false 0

int main()
{
	
	int i, cod;
	int QtdVeiculos = 0, QtdAcidentes = 0, MaiorIndice = 0, MenorIndice = 0, CidadeMenorIndice = 0;
	int CidadeMaiorIndice = 0, SomaVeiculos = 0, SomaAcidentes =0,  QtdRS = 0;
	float MediaVeiculos = 0, MediaAcidentes = 0;
	char estado [2];
	boolean PrimeiraVez = true;
	
	for(i=0; i<200; i++)
	{
		printf("\nInforme o codigo da cidade: ");
		scanf("%d", &cod);
		
		printf("Informe a sigla do estado: ");
		scanf("%s", estado);
		
		printf("Informe a quantidade de veiculos: ");
		scanf("%d", &QtdVeiculos);
		
		printf("Informe a quantidade de acidentes: ");
		scanf("%d", &QtdAcidentes);
		
		SomaVeiculos += QtdVeiculos;
		
		if(PrimeiraVez)
		{
			MaiorIndice = QtdAcidentes;
			CidadeMaiorIndice = cod;
			MenorIndice = QtdAcidentes;
			CidadeMenorIndice = cod;
			
			PrimeiraVez = false;
		}
		if(QtdAcidentes>MaiorIndice)
		{
			MaiorIndice = QtdAcidentes;
			CidadeMaiorIndice = cod;
		}
		else
		{
			if(QtdAcidentes<MenorIndice){
				MenorIndice = QtdAcidentes;
				CidadeMenorIndice = cod;
			}	
		}
		strupr(estado);
		
		if(strcmp(estado, "RS") == 0)
		{
			SomaAcidentes+= QtdAcidentes;
			QtdRS++;
		}	
	} 
	MediaVeiculos = (float)SomaVeiculos/200;
	MediaAcidentes = (float)SomaAcidentes/QtdRS;
		
	printf("\nMaior indice de acidentes: %d na cidade %d\n", MaiorIndice, CidadeMaiorIndice);
	printf("Menor indice de acidentes: %d na cidade %d\n", MenorIndice, CidadeMenorIndice);
	printf("Media de veiculos nas cidades brasileiras: %.1f\n", MediaVeiculos);
	printf("Media de acidentes nas cidades do RS: %.1f\n", MediaAcidentes);
	
	return 0;
}
