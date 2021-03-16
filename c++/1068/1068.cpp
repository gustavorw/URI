#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
/*
    pode ser feito com contadores
    Esse problema utiliza a estrutura de dados Pilha
    LIFO
    link: https://www.urionlinejudge.com.br/judge/pt/problems/view/1068
*/
int main()
{
    char op[1001];
    bool res = true;
    while (scanf("%s", &op) != EOF)
    {
        stack<char> pilha;
        for (int i = 0; op[i] != '\0'; i++)
        {
            if (op[i] == '(')
            {
                pilha.push(op[i]);
            }
            else if (op[i] == ')')
            {

                if (pilha.size() == 0)
                {
                    res = false;
                    break;
                }
                else
                {
                    pilha.pop();
                }
            }
        }
        if (res && pilha.empty())
        {
            cout << "correct" << endl;
        }
        else
        {
            cout << "incorrect" << endl;
        }
        res = true;
    }
}