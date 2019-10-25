#include<stdio.h>
int main()
{
	int total = 0;
	int n, tempo, velocidade;
	scanf("%d", &n);
	while(n != 0){

		scanf("%d", &tempo);
		scanf("%d", &velocidade);
		total + = tempo * velocidade;
		n--;
	}
	printf("%d\n",total );

}