#include<iostream>
#include<math.h>
using namespace std;
typedef long long maior;
int main()
{
	int n, x, y;
	cin >> n;
	while(n--)
	{
		cin >> x >> y;
		if(x == 0 && y == 0)
		{
			cout << 0 << "\n";
		}
		else
		{
			maior result = 0;
			result = (pow(26, x)) * (pow(10, y));
			cout << result << "\n";
		}
	}
	return 0;
}
