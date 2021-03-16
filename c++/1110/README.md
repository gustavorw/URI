## Ententendo o Problema
<a href="https://www.urionlinejudge.com.br/judge/en/problems/view/1110">Problema 1110 uri</a>


Enunciado do problema 

    Dada uma pilha de n cartas enumeradas de 1 até n com a carta 1 no topo e a carta n na base.  A seguinte operação é ralizada enquanto tiver 2 ou mais cartas na pilha.

    Jogue fora a carta do topo e mova a próxima carta (a que ficou no topo) para a base da pilha.

    Sua tarefa é encontrar a sequência de cartas descartadas e a última carta remanescente


Vamos pegar o primeiro caso de teste com n = 7:

    1 2 3 4 5 6 7

Primeiro passo: vamos remover o número 1:
    
    2 3 4 5 6 7

Segundo passo: vamos colocar o número 2 no fim do vetor:
    
    3 4 5 6 7 2

Agora vamos para o próximo passo: remover o número 3:

    4 5 6 7 2

Colocar o 4 no fim:

    5 6 7 2 4

Vamos analisar a entrada do problema

    A entrada consiste em um número indeterminado de linhas contendo cada uma um valor de 1 até 50. A última linha contém o valor 0.


Podemos entender que o tamanho máximo do nosso vetor é 50, e que há uma condição especial para a parada do nosso programa que é o número 0.