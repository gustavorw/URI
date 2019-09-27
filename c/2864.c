#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	int a,b,c,casos;
	float delta;
	
	scanf("%i",&casos);
	while(casos>0)
	{
		scanf("%i%i%i",&a,&b,&c);
		delta = (-(pow(b,2)-(4*a*c)))/(4*a);
		printf("%.2f\n",delta);
		
		casos--;
	}
	
	return 0;
}