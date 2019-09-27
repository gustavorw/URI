#include <stdio.h>
int main()
{
	int n;
	float tempo,melhorTempo;
	melhorTempo = 11;
	
	while(1)
	{
		scanf("%d",&n);
		if(n == EOF)
			break;
		while(n--){
			scanf("%f",&tempo);
			if(tempo < melhorTempo)
				melhorTempo = tempo;
			
		}
		printf("%.2f\n",melhorTempo);
		melhorTempo = 11;
	
	
		
	}
	
	return 0;
}	