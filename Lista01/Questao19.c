/*Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados
de idade, sexo (M/F) e salário. Faça um algoritmo que informe:
a. a média de salário do grupo;
b. maior e menor idade do grupo;
c. quantidade de mulheres com salário até R$100,00.
Encerre a entrada de dados quando for digitada uma idade negativa.*/

#include <stdio.h>

typedef int boolean;
#define true 1
#define false 0

int main()
{
	int idade;
	char sexo;
	float salario;
	int MaiorIdade = 0, MenorIdade = 0, c = 0, QtdMulheresCem = 0;
	float SomaSalario = 0, MediaSalario = 0; 
	boolean PrimeiraVez = true;
	
	printf("Informe a idade: ");
	scanf("%d", &idade);
	
	while(idade>=0)
	{
		printf("Informe o sexo (M/F): ");
		scanf(" %c", &sexo);
		
		printf("Informe o salario: ");
		scanf("%f", &salario);
		
		SomaSalario+= salario;
		c++;
		
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
				if(idade < MenorIdade)
				{
					MenorIdade = idade;
				}
			}
		}

		sexo = toupper(sexo);
		
		if((salario <= 100 )&& (sexo == 'F')){
			QtdMulheresCem++;
		}
		printf("\nInforme a idade: ");
		scanf("%d", &idade);
	}
	if(c!=0){
		MediaSalario = SomaSalario/c;
	}	
	printf("Media de Salario: R$ %.2f", MediaSalario);
	printf("\nMaiorIdade: %d\n", MaiorIdade);
	printf("MenorIdade: %d\n", MenorIdade);
	printf("%d mulheres com salario ate R$ 100", QtdMulheresCem);
	
	
	return 0;
}
