#include <stdio.h>
int main()
{
    char numeros[15];
    int x,
        ps1 = 0, ps2, ps3, ps4, ps5, ps6, ps7, total;
    scanf("%d", &x);
    while (x > 0)
    {
        scanf("%s", numeros);
        if (numeros[2] == '0')
            ps1 = 0;
        else if (numeros[2] == '1')
            ps1 = 1;
        else if (numeros[2] == '2')
            ps1 = 2;
        else if (numeros[2] == '3')
            ps1 = 3;
        else if (numeros[2] == '4')
            ps1 = 4;
        else if (numeros[2] == '5')
            ps1 = 5;
        else if (numeros[2] == '6')
            ps1 = 6;
        else if (numeros[2] == '7')
            ps1 = 7;
        else if (numeros[2] == '8')
            ps1 = 8;
        else if (numeros[2] == '9')
            ps1 = 9;
        if (numeros[3] == '0')
            ps2 = 0;
        else if (numeros[3] == '1')
            ps2 = 1;
        else if (numeros[3] == '2')
            ps2 = 2;
        else if (numeros[3] == '3')
            ps2 = 3;
        else if (numeros[3] == '4')
            ps2 = 4;
        else if (numeros[3] == '5')
            ps2 = 5;
        else if (numeros[3] == '6')
            ps2 = 6;
        else if (numeros[3] == '7')
            ps2 = 7;
        else if (numeros[3] == '8')
            ps2 = 8;
        else if (numeros[3] == '9')
            ps2 = 9;
        if (numeros[5] == '0')
            ps3 = 0;
        else if (numeros[5] == '1')
            ps3 = 1;
        else if (numeros[5] == '2')
            ps3 = 2;
        else if (numeros[5] == '3')
            ps3 = 3;
        else if (numeros[5] == '4')
            ps3 = 4;
        else if (numeros[5] == '5')
            ps3 = 5;
        else if (numeros[5] == '6')
            ps3 = 6;
        else if (numeros[5] == '7')
            ps3 = 7;
        else if (numeros[5] == '8')
            ps3 = 8;
        else if (numeros[5] == '9')
            ps3 = 9;
        if (numeros[6] == '0')
            ps4 = 0;
        else if (numeros[6] == '1')
            ps4 = 1;
        else if (numeros[6] == '2')
            ps4 = 2;
        else if (numeros[6] == '3')
            ps4 = 3;
        else if (numeros[6] == '4')
            ps4 = 4;
        else if (numeros[6] == '5')
            ps4 = 5;
        else if (numeros[6] == '6')
            ps4 = 6;
        else if (numeros[6] == '7')
            ps4 = 7;
        else if (numeros[6] == '8')
            ps4 = 8;
        else if (numeros[6] == '9')
            ps4 = 9;
        if (numeros[7] == '0')
            ps5 = 0;
        else if (numeros[7] == '1')
            ps5 = 1;
        else if (numeros[7] == '2')
            ps5 = 2;
        else if (numeros[7] == '3')
            ps5 = 3;
        else if (numeros[7] == '4')
            ps5 = 4;
        else if (numeros[7] == '5')
            ps5 = 5;
        else if (numeros[7] == '6')
            ps5 = 6;
        else if (numeros[7] == '7')
            ps5 = 7;
        else if (numeros[7] == '8')
            ps5 = 8;
        else if (numeros[7] == '9')
            ps5 = 9;
        if (numeros[11] == '0')
            ps6 = 0;
        else if (numeros[11] == '1')
            ps6 = 1;
        else if (numeros[11] == '2')
            ps6 = 2;
        else if (numeros[11] == '3')
            ps6 = 3;
        else if (numeros[11] == '4')
            ps6 = 4;
        else if (numeros[11] == '5')
            ps6 = 5;
        else if (numeros[11] == '6')
            ps6 = 6;
        else if (numeros[11] == '7')
            ps6 = 7;
        else if (numeros[11] == '8')
            ps6 = 8;
        else if (numeros[11] == '9')
            ps6 = 9;
        if (numeros[12] == '0')
            ps7 = 0;
        else if (numeros[12] == '1')
            ps7 = 1;
        else if (numeros[12] == '2')
            ps7 = 2;
        else if (numeros[12] == '3')
            ps7 = 3;
        else if (numeros[12] == '4')
            ps7 = 4;
        else if (numeros[12] == '5')
            ps7 = 5;
        else if (numeros[12] == '6')
            ps7 = 6;
        else if (numeros[12] == '7')
            ps7 = 7;
        else if (numeros[12] == '8')
            ps7 = 8;
        else if (numeros[12] == '9')
            ps7 = 9;
        total = (ps1 * 10 + ps2) + ((ps3 * 100) + (ps4 * 10) + ps5) + ((ps6 * 10) + ps7);
        printf("%d\n", total);
        x--;
    }

    return 0;
}