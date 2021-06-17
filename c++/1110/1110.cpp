#include <iostream>

using namespace std;

void preenhceVetor(int *vetor, int tam);
void imprime(int *vetor, int *cont, int tam);
void removeNum(int *vetor, int *posicao, int *tam);

int main(int argc, char** argv)
{
	int numero;
	int cont = 0, posi = 0, tam;
	int *vetor = new int[51];
	while(cin >> numero, numero != 0)
	{
		tam = numero;
		preenhceVetor(vetor, numero);
		cout << "Discarded cards: ";
		posi = cont = 0;
		while(true)
		{
			imprime(vetor, &cont, tam);
			removeNum(vetor, &posi, &numero);
			if(numero == 1)
			{
				break;
			}
		}
		cout << "Remaining card: " << vetor[0] << endl;
	}
	return 0;
}


void preenhceVetor(int *vetor, int tam)
{
	for(int i = 0; i < tam; i++)
	{
		vetor[i] = i + 1;
	}
}


void imprime(int *vetor, int *cont, int tam)
{
	if((*cont) < tam - 2)
	{
		cout << vetor[0] << ", ";
	}
	else
	{
		cout << vetor[0] << endl;
	}
	(*cont)++;
}

void removeNum(int *vetor, int *posicao, int *tam)
{
	int i, num;
	for(i = (*posicao); i < (*tam); i++)
	{
		vetor[i] = vetor[i + 1];
	}
	num = vetor[0];
	(*tam)--;
	for(i = (*posicao); i < (*tam); i++)
	{
		vetor[i] = vetor[i + 1];
	}
	vetor[i - 1] = num;
	(*posicao) = 0;
}