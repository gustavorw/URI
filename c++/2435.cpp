#include <iostream>
using namespace std;

int main()
{
    int c_1, c_2, d_1, d_2, v_1, v_2;

    cin >> c_1 >> d_1 >> v_1;
    cin >> c_2 >> d_2 >> v_2;

    float x_1 = d_1 / (v_1 / 3.6);
    float x_2 = d_2 / (v_2 / 3.6);

    if (x_1 > x_2)
    {
        cout << c_2 << endl;
    }
    else
    {
        cout << c_1 << endl;
    }

    return 0;
}