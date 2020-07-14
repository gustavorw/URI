#include <stdio.h>
int main(int argc, char **argv)
{
    char letras[27];
    int x, i;
    while (scanf("%s", letras) != EOF)
    {
        scanf("%d", &x);
        int vet[x];
        for (i = 0; i < x; i++)
            scanf("%d", &vet[i]);
        for (i = 0; i < x; i++)
            printf("%c", letras[vet[i] - 1]);
        printf("\n");
    }

    return 0;
}
