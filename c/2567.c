/*
 * =====================================================================================
 *
 *       Filename:  virus.c
 *
 *    Description:  Virus 2567
 *
 *        Version:  1.0
 *        Created:  02/10/2019 19:56:25
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Mauricio (punisher077), arthur.mts@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

void main()
{
    int n, i;
    while (scanf("%d", &n) != EOF)
    {
        int idades[n];
        for (i = 0; i < n; i++)
            scanf("%d", &idades[i]);
        int aux, j, letals = 0;
        for(i = 1; i < n; i++){
            aux = idades[i];
            j = i - 1;
            while(j >= 0 && idades[j] > aux){
                idades[j+1] = idades[j];
                j--;
            }
            idades[j+1] = aux;
        }

        for(i = 0; i < n/2; i++)
            letals+= idades[n-(i+1)] - idades[i];
        
        printf("%d\n", letals);
    }
}
