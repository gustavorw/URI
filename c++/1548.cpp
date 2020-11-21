#include <iostream>
using namespace std;

int main()
{
    int n, ler, q_notas, aux = 0;
    cin >> n;
    while (n)
    {
        cin >> q_notas;
        aux = q_notas;
        int notas[aux];
        int notas_antes[aux];
        for (int i = 0; i < aux; i++)
        {
            cin >> notas[i];
            notas_antes[i] = notas[i];
        }
        for (int j = q_notas - 1; j >= 1; j--)
        {
            for (int i = 0; i < j; i++)
            {
                if (notas[i] < notas[i + 1])
                {
                    aux = notas[i];
                    notas[i] = notas[i + 1];
                    notas[i + 1] = aux;
                }
            }
        }
        int r = 0;
        for (int k = 0; k < q_notas; k++)
        {
            if (notas[k] == notas_antes[k])
                r++;
        }

        cout << r << endl;
        n--;
    }

    return 0;
}