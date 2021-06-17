#include <stdio.h>

int main()
{
    int numero[5], cont = 0;
    scanf("%d", &numero[0]);
    scanf("%d", &numero[1]);
    scanf("%d", &numero[2]);
    scanf("%d", &numero[3]);
    scanf("%d", &numero[4]);

    if (numero[0] % 2 == 0)
        cont++;
    if (numero[1] % 2 == 0)
        cont++;
    if (numero[2] % 2 == 0)
        cont++;
    if (numero[3] % 2 == 0)
        cont++;
    if (numero[4] % 2 == 0)
        cont++;
    printf("%d valores pares\n", cont);
    return 0;
}