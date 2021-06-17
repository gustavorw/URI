#include <iostream>

using namespace std;

int main()
{
    int l, d, k, p;
    int result;
    cin>>l>>d;
    cin>>k>>p;
    result = (l * k) + ((l/d)*p);
    cout<<result<< endl;
    return 0;
}
