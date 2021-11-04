/*Faça um algoritmo que calcule os 20 primeiros números primos, dados os tres primeiros
1,2 e 3.*/

#include <stdio.h>
	
typedef int boolean;
#define true 1
#define false 0
	
int main(){
		
	int num = 3, i, c;
	float resto = 0;
	boolean primo;
	
	for (i = 0; i < 20; i++) 
	{
		c = 2;
		primo = true;
		num++;
		while (c < num) 
		{
			resto = num % c;
			if (resto == 0) 
			{
				primo = false;
			}
			c++;
			if(c==num) 
			{
				if(primo) 
				{
					printf("%d e primo\n", num);
				}
			}
		}
	}
		return 0;
}
