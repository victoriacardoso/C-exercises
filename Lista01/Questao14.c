/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
sobre o salário e número de filhos. A prefeitura deseja saber:
a. média do salário da população;
b. média do número de filhos;
c. maior salário;
d. percentual de pessoas com salário até R$100,00.*/

#include <stdio.h>

int main()
{
	
	float salario;
	int filhos, SomaFilhos = 0;
	float SomaSalario = 0, MediaSalario = 0, MediaFilhos = 0, MaiorSalario = 0, percentual = 0;
	int SalarioCem = 0, qtd = 0;

	printf("Informe o salario: ");
	scanf("%f", &salario);
	
	 while(salario>=0) 
	 {
		
		printf("Informe a quantidade de filhos: ");
		scanf("%d", &filhos);
		
		SomaSalario += salario;
		SomaFilhos += filhos;
		qtd ++;
		
		if(salario>MaiorSalario)
		{
			MaiorSalario = salario;
		}
		if(salario<=100)
		{
			SalarioCem ++;
		}
		
		printf("Informe o salario: ");
		scanf("%f", &salario);	
	}
	if(qtd!= 0) 
	{
		MediaSalario = (float)SomaSalario/qtd;
		MediaFilhos = (float)SomaFilhos/qtd;
		percentual = (float)(SalarioCem *100)/qtd;
	}
	printf("\nMedia do salario da populacao: R$ %.2f\n", MediaSalario);
	printf("Media de filhos da populacao: %.2f\n", MediaFilhos);
	printf("Maior salario: R$ %.2f\n", MaiorSalario);
	printf("Percentual de pessoas com salario ate 100 reais: %.2f %% \n", percentual);

		
	return 0;
}
