#include <iostream>
using namespace std;

char alternativa()
{
    char letras[5] = {'A', 'B', 'C', 'D', 'E'};
    int cont = 0;
    int v[5];
    int mais_de_duas_alternativas = 0;
    int resposta = 0;
    int menor = 255;
    int indice = 0;
    while (cont < 5)
    {
        cin >> v[cont];
        if (v[cont] <= 127)
        {
            resposta++;
        }
        if (v[cont] < menor)
        {
            menor = v[cont];
            indice = cont;
        }
        cont++;
    }
    if (resposta != 1)
    {
        return '*';
    }
    return letras[indice];
}

int main()
{
    int quantidade_q;
    while (true)
    {
        cin >> quantidade_q;
        if (quantidade_q == 0)
            break;
        while (quantidade_q)
        {
            char r = alternativa();
            cout << r << endl;
            quantidade_q--;
        }
    }

    cin >> quantidade_q;

    return 0;
}
