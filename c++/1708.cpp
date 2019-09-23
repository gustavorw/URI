#include<iostream>
using namespace std;
int main()
{
	int carOne,carTwo,voltas,time,x,y;
	cin >> carOne>>carTwo;
	time = carTwo;
	x = carOne;
	y = carTwo;
	voltas = 0;
	while(true)
	{
		voltas+=1;
		
		if((carTwo - carOne)>=time){
			break;
		}
		carOne +=x;
		carTwo+=y;
	}
	cout<<voltas<<"\n";
	return 0;
}