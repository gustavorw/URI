#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int x, y, n;
	float result;
	cin>>n;
	cin>>y;
	cin>>x;
    result = (float)n/(x+y);
    //cout<<result;
	printf("%.2f\n",result);
 

	
	return 0;
}