#include <stdio.h>
int main(int argc, char** argv)
{
	double num;
	int i;
	scanf("%lf", &num);
	for(i = 0; i < 100; i++)
	{
		printf("N[%d] = %.4f\n", i, num);
		num = num / 2;
	}
	return 0;
}
