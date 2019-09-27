#include <stdio.h>
#include <math.h>

int quadrados(int n){
	int z = 0;
	while(n!=0)
	{
		z+=pow(n,2);
		n--;	
	}
	
	return z;
}

int main(int argc, char** argv)
{
	int x = 1;
	while(x!=0){
		scanf("%i",&x);
		x = quadrados(x);
		if(x != 0)
			printf("%i\n",x);
	}
	
	
	return 0;
}