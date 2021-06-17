#include<stdio.h>
int main()
{
	int casos, id1, n2, id2, x = 0,i;

	while (scanf("%d", &casos) != EOF)
	{
		scanf("%d", &id1);
		x=0;
		for(i = 0; i < casos; i++)
		{
			scanf("%d", &id2);
			scanf("%d", &n2);
			if(id2 == id1 && n2 == 0)
			{
				x++;
			}
		}
		printf("%d\n", x);
	}


	return 0;
}
