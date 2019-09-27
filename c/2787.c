#include <stdio.h>
int xadrex(int indice_1, int indice_2)
{
	if(indice_1 % 2 == 0)
	{
		if(indice_2 % 2 == 0)
			return 1;
		else
			return 0;
	}
	else
	{
		if(indice_2 % 2 == 0)
			return 0;
		else
			return 1;
	}
}
int main()
{
	int n1, n2, resultado;
	scanf("%d", &n1);
	scanf("%d", &n2);
	resultado = xadrex(n1, n2);
	printf("%d\n", resultado);

	return 0;
}