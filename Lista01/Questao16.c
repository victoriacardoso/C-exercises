/*Em uma eleição presidencial existem três candidatos. Os votos são informados através
de códigos. Os dados utilizados para a contagem dos votos obedecem à seguinte
codificação:
1 = Candidato A, 2 = Candidato B, 3 = Candidato C;
4 = voto nulo;
5 = voto em branco.
Elabore um algoritmo que leia o código do candidado em um voto. Calcule e escreva:
a. total de votos para cada candidato;
b. total de votos nulos;
c. total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0.*/

#include <stdio.h>

int main()
{
	
	int CadA = 0, CadB = 0, CadC = 0, VotosBrancos = 0, VotosNulos = 0;	
	int cod;
	
	printf("\nInforme o codigo do candidato: ");
	scanf("%d", &cod);
	
	while(cod!=0) 
	{
		switch(cod)
		{
			case 1:
				CadA++;
				break;
			case 2: 
				CadB++;
				break;
			case 3: 
				CadC++;
				break;
			case 4:
				VotosNulos++;
				break;
			case 5: 
				VotosBrancos++;
				break;
			default:
				printf("\nCodigo invalido\n");
				break;
		}
		
		printf("\nInforme o codigo do candidato: ");
		scanf("%d", &cod);
	}	
	printf("\nCandidato A: %d votos\n", CadA);
	printf("Candidato B: %d votos\n", CadB);
	printf("Candidato C: %d votos\n", CadC);
	printf("Votos Nulos: %d votos\n", VotosNulos);
	printf("Votos Brancos: %d votos\n", VotosBrancos);

	
	return 0;
}
