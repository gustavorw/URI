#include<iostream>
using namespace std;
int main()
{   int n, f, p;
    cin>>n>>p>>f;
    if(n * f <= p)
        cout<<"S\n";
    else
        cout<<"N\n";
    return 0;
}