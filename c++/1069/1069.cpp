#include <iostream>
using namespace std;
/*
    https://www.urionlinejudge.com.br/judge/pt/problems/view/1069
    
*/
int main()
{

    char mina[1001];
    int diamantes, aux, n, indice;
    scanf("%d", &n);

    while (n)
    {
        scanf("%s", mina);
        indice = 0;
        aux = 0;
        diamantes = 0;
        while (mina[indice] != '\0')
        {
            if (mina[indice] == '<')
            {
                aux++;
            }
            else if (mina[indice] == '>' && aux > 0)
            {
                aux--;
                diamantes++;
            }
            indice++;
        }
        cout << diamantes << endl;

        n--;
    }

    return 0;
}