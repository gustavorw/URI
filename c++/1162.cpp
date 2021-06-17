#include <iostream>
using namespace std;

void countSwap(int v[], int size);

int main()
{

    int n, l;

    cin >> n;
    while (n > 0)
    {
        cin >> l;
        int v[l];
        for (int i = 0; i < l; i++)
        {
            cin >> v[i];
        }
        countSwap(v, l);

        n--;
    }
}

void countSwap(int v[], int size)
{
    int aux, swaps = 0;
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                swaps++;
            }
        }
    }
    cout << "Optimal train swapping takes " << swaps <<" swaps." << endl;
}