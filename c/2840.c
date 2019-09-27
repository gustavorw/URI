#include <stdio.h>
#include <math.h>
int main(){
	int raio, quantidadeGas,resultado;
	float pi = 3.1415, volume;
	scanf("%d",&raio);
	scanf("%d",&quantidadeGas);
	volume = (4*(pow(raio,3)*pi))/3;
	resultado = quantidadeGas/volume;
	printf("%d\n",resultado);
	
	return 0;
}