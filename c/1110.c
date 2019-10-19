/*
    * =====================================================================================
    *
    *       Filename:  jogandoCartas.c
    *
    *    Description:  Jogando Cartas Fora 1110
    *
    *        Version:  1.0
    *        Created:  18/10/2019 17:25:01
    *       Revision:  none
    *       Compiler:  gcc
    *
    *         Author:  Arthur Mauricio (punisher077), arthur.mts@gmail.com
    *   Organization:  IFPB Campina Grande
    *
    * =====================================================================================
    */
    #include <stdlib.h>
    #include <stdio.h>

    #define MAX 50

    typedef struct
    {
        int topo;
        int lista[MAX];
    } Pilha;

    int push(Pilha *p, int n);
    int myPop(Pilha *p);
    Pilha *createPilha();
    int pop(Pilha *p);

    int main()
    {
        int nc;
        while (1)
        {
            scanf("%d", &nc);
            if (!nc)
                break;
            Pilha *p = createPilha();
            int discard[nc - 1];
            int i, countDiscard = 0;
            for (i = nc; i > 0; i--)
            {
                push(p, i);
            }
            
            while (p->topo >= 2)
            {
                discard[countDiscard] = myPop(p);
                countDiscard++;
            }
            printf("Discarded cards: ");
            for (i = 0; i < nc - 1; i++)
            {
                if (i < nc - 2)
                    printf("%d, ", discard[i]);
                else
                    printf("%d\n", discard[i]);
            }
            printf("Remaining card: %d\n", pop(p));
        }
        return 0;
    }


    Pilha *createPilha(){
        Pilha *p = (Pilha*)malloc(sizeof(Pilha));
        p->topo = 0;
        return p;
    }

    int push(Pilha *p, int n)
    {
        if (p->topo < MAX)
        {
            p->lista[p->topo++] = n;
            return 1;
        }
        return 0;
    }

    int myPop(Pilha *p)
    {
        int ret, ntopo, i;
        if (p->topo)
        {
            ret = p->lista[--p->topo];
            ntopo = p->lista[p->topo - 1];
            for (i = p->topo - 1; i >= 0; i--)
                p->lista[i + 1] = p->lista[i];
            p->lista[0] = ntopo;
        }
        return ret;
    }

    int pop(Pilha *p)
    {
        int ret;
        if (p->topo)
            ret = p->lista[p->topo--];
        return ret;
    }
