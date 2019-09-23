#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if((x>y&&y>z)||(z>y&&y>x)) cout<<y<<"\n";
	else if((y>x&&x>z)||(z>x&&x>y))cout<<x<<"\n";
	else cout<<z<<"\n";
	return 0;
	
}
