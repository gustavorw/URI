#include <stdio.h>
int main()
{

    char nome[100];
    float var, notas[7], maior, menor, total = 0;
    int rep, i;
    scanf("%d", &rep);
    while (rep > 0)
    {
        total = 0;
        scanf("%s", nome);
        scanf("%f", &var);
        for (i = 0; i < 7; i++)
            scanf("%f", &notas[i]);
        maior = notas[0];
        menor = notas[0];
        for (i = 0; i < 7; i++)
        {
            if (maior < notas[i])
            {
                maior = notas[i];
            }
            if (notas[i] < menor)
            {
                menor = notas[i];
            }
            total += notas[i];
        }
        total = total - (maior + menor);
        total = var * total;
        printf("%s %.2f\n", nome, total);

        rep--;
    }

    return 0;
}