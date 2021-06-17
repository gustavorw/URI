#include<iostream>
int main(){
    int altura, profundidade, largura, diametro;
    std::cin>> diametro;
    std::cin>>altura>>largura>>profundidade;
    if(diametro <= altura and diametro<=largura and diametro<= largura)
        std::cout<<"S\n";
    else 
        std::cout<<"N\n";
    return 0;

}