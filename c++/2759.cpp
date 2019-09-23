#include<iostream>
using namespace std;

int main()
{	char x[3];
	cin>>x[0]>>x[1]>>x[2];
	cout<<"A = "<<x[0]<<", B = "<<x[1]<<", C = "<<x[2]<<"\n";
	cout<<"A = "<<x[1]<<", B = "<<x[2]<<", C = "<<x[0]<<"\n";
	cout<<"A = "<<x[2]<<", B = "<<x[0]<<", C = "<<x[1]<<"\n";
	return 0;
}
