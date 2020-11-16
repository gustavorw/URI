#include <iostream>
using namespace std;

bool verificarClassico(int dado[])
{
    int cont = 0;
    int dadoClassico[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        cont = 0;
        for (int j = 0; j < 6; j++)
        {
            if (dadoClassico[i] == dado[j])
                cont++;
            if (cont > 1)
                return false;
        }
        if (cont == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int lados[6], n;

    cin >> n;
    while (n)
    {

        for (int i = 0; i < 6; i++)
        {
            cin >> lados[i];
        }

        if (((lados[0] + lados[5]) == 7) &&
            ((lados[1] + lados[3]) == 7) &&
            ((lados[2] + lados[4]) == 7) &&
            verificarClassico(lados))
        {
            cout << "SIM" << endl;
        }
        else
        {
            cout << "NAO" << endl;
        }
        n--;
    }

    return 0;
}
