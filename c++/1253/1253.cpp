#include <iostream>
#include <string.h>

using namespace std;

/* 
    https://www.urionlinejudge.com.br/judge/pt/problems/view/1253
*/

int main()
{

    char cifra[51];
    int deslocamento, contador = 0, n;
    char aux;
    
    scanf("%d", &n);
    while (n)
    {
        scanf("%s", cifra);
        scanf("%d", &deslocamento);
        for (int i = 0; i < strlen(cifra); i++)
        {
            char letra = (int)cifra[i];
            while (contador <= deslocamento)
            {
                if (letra == 'A')
                {
                    aux = letra;
                    letra = 'Z';
                }
                else
                {
                    aux = letra;
                    letra--;
                }
                contador++;
            }
            cifra[i] = aux;
            contador = 0;
        }

        cout << cifra << endl;
        n--;
    }
    return 0;
}