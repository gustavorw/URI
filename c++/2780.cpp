#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n <= 800)
        cout<<"1\n";
    else if(n<= 1400)
        cout<<"2\n";
    else
        cout<<"3\n";

    return 0;
}