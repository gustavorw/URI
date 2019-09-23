#include<iostream>
using namespace std;
int main()
{
	int i,f;
	cin >> i >> f;
	if( 3 <= f && f <= 96 && f > i ) cout<< "crescente\n" ;
	else if( 3 <= f && f <= 96 && f < i ) cout<< "minguante\n" ;
	else if( 0 <= f && f <= 2 ) cout<< "nova\n";
	else if( 97 <= f && f <= 100 ) cout<< "cheia\n" ;
	 return 0;
}
