/*Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles
estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas
informações.*/

#include <stdio.h>

int main(){
	
	int i;
	int ForaIntervalo = 0, DentroIntervalo = 0;
	float valor;
	
	for(i=0; i<10; i++){
		printf("Informe um valor: ");
		scanf("%f", &valor);
		
		if(valor>=10 && valor<=20){
			DentroIntervalo ++;
		}
		else{
			ForaIntervalo ++;
		}
	}
	printf("%d valores estao dentro do intervalo.\n", DentroIntervalo);
	printf("%d valores estao fora do intervalo.\n", ForaIntervalo);

		
	return 0;
}
