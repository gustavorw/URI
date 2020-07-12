#include <stdio.h>

int main()
{
    int N, i, ide = 0, menor;
    scanf("%d", &N);
    int X[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &X[i]);
        menor = X[0];
    }
    for (i = 0; i < N; i++)
    {
        if (menor > X[i])
        {
            menor = X[i];
            ide = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", ide);
    return 0;
}
