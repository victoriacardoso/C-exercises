/*Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo
para ler o preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele
conseguiu colocar no tanque*/

#include <stdio.h>

int main()
{
	
	float PrecoGasolina;
	float ValorPago;
	float QtdLitros;
	
	printf("Informe o preco da gasolina: ");
	scanf("%f", &PrecoGasolina);
	
	printf("Informe o valor pago: ");
	scanf("%f", &ValorPago);
	
	QtdLitros = ValorPago/PrecoGasolina;
	
	printf("Ele conseguiu colocar %.1f litros", QtdLitros);
	
	return 0;
}
