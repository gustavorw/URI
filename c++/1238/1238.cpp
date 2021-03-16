#include <iostream>
#include <string.h>
using namespace std;

/*
    * link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1238
*/

int main()
{
    char p1[51], p2[51];
    int n, itp1, itp2, c, tp2, tp1;

    cin >> n;
    while (n)
    {

        cin >> p1 >> p2;
        tp1 = strlen(p1);
        tp2 = strlen(p2);
        itp1 = 0;
        itp2 = 1;
        c = 0;
        char r[102];
        while (tp1 != 0 && tp2 != 0)
        {
            r[itp1] = p1[c];
            r[itp2] = p2[c];

            tp1--;
            tp2--;
            itp1 = 2 + itp1;
            itp2 = itp2 + 2;
            c++;
        }

        if (tp2 != 0)
        {
            while (tp2 != 0)
            {
                r[itp1] = p2[c];
                c++;
                tp2--;
                itp1++;
            }
        }
        else if (tp1 != 0)
        {
            while (tp1 != 0)
            {
                r[itp1] = p1[c];
                c++;
                tp1--;
                itp1++;
            }
        }
        r[itp1] = '\0';

        cout << r << endl;
        n--;
    }

    return 0;
}