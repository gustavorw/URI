#include<iostream>
using namespace std;
int main()
{
	int nota;
	cin>>nota;
	if(nota == 0) cout<<"E\n";
	else if(nota>=1 && nota<=35)cout<<"D\n";
	else if(nota>=36 && nota <=60)cout<<"C\n";
	else if(nota>=61 && nota <=85)cout<<"B\n";
	else cout<<"A\n";
	
}
