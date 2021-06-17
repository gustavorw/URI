#include <iostream>
using namespace std;

int main()
{
    int q, m1, v2, m2, v1, time1, time2;

    cin >> q;
    //cout << "Hello World!" << endl;

    while (q)
    {
        time1 = 0;
        time2 = 0;
        char x;
        cin >> m1 >> x >> v2;
        cin >> m2 >> x >> v1;
        time1 = m1 + v1;
        time2 = m2 + v2;
        if (time1 > time2)
            cout << "Time 1" << endl;
        else if (time2 > time1)
            cout << "Time 2" << endl;
        else
        {
            if (v2 > v1)
                cout << "Time 2" << endl;
            else if (v1 > v2)
                cout << "Time 1" << endl;
            else
                cout << "Penaltis" << endl;
        }
        q--;
    }

    return 0;
}
