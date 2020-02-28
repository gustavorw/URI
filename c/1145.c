#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b , cont = 0, i;

    scanf("%d %d", &a, &b);

    for(i = 1; i <= b; i++){
       
        cont++;

        if(cont == a){
            printf("%d", i);
        }
        else{
             printf("%d ", i);
        }
        if(cont == a){
            cont = 0;
            printf("\n");
        }
    }
    
    return 0;
}

