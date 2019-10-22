#include <stdio.h>
void main(){
    int g, p, j, i, s, pp,k;
    while(1){
        scanf("%d %d", &g, &p);
        if(g==0||p==0) break;

        int gps[g][p];
        for(i = 0; i < g; i++) for(j = 0; j < p; j++) scanf("%d", &gps[i][j]);

        scanf("%d", &s);
        int tables[s][p];
        for(i = 0; i < s;i++){
            scanf("%d", &pp);
            for(j=0; j < p; j++){
                if(j<pp) scanf("%d", &tables[i][j]);
                else tables[i][j] = 0;
            }
        }

        int pontuacoes[p], maior, iPilotoC, in;
        for(i=0; i < s; i++){
            for(j=0; j < p; j++) pontuacoes[j] = 0;
            for(j=0; j < g; j++){
                for(k = 0; k < p; k++){
                    iPilotoC = gps[j][k]-1;
                    pontuacoes[k] += tables[i][iPilotoC];
                }
            }
            maior = in = 0;
            
            for(j=0;j<p;j++) if(pontuacoes[j] >= maior) maior = pontuacoes[j];
            for(k=0;k<p;k++)
                if(pontuacoes[k] == maior){
                    if(!in) printf("%d", k+1), in=1;
                    else printf(" %d",k+1);
                }

            printf("\n");
        }
    }
}
