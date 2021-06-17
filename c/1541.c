#include<math.h>
int main(){
	int area,b,c,x,y;
	while(1){
		scanf("%d",&area);
		if(area==0){
			return 0;
		}
	  else{
		  scanf("%d %d",&b,&c);
		  x=((area*b)*100)/c;
		  y=pow(x,.5);
		  printf("%d\n",y);
	  }
	
	}
	return 0;
}