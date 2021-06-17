#include<iostream>
#define MAX 6
int main(){
    int i, j, sorteio;
    int acertos = 0;
    int jogadas[MAX];
    for(i = 0; i < MAX; i++){
        std::cin>>jogadas[i];
    }
    for(i = 0; i < MAX; i++){
        std::cin>>sorteio;
        for ( j = 0; j < MAX; j++)
        {
            if(sorteio == jogadas[j]){
                acertos = acertos + 1;
            }
        }
        
    }
    if(acertos == 6)
        std::cout<<"sena\n";
    else if( acertos == 5)
        std::cout<<"quina\n";
    else if (acertos == 4)
        std::cout<<"quadra\n";
    else if (acertos == 3)
        std::cout<<"terno\n";
    else
        std::cout<<"azar\n";
    return 0;
}