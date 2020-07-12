#include <stdio.h>

int main()
{

    int horas, Vmedia;
    float litros, distancia;
    scanf("%d", &horas);
    scanf("%d", &Vmedia);
    distancia = Vmedia * horas;
    litros = distancia / 12;
    printf("%.3f", litros);
    printf("\n");
    return 0;
}