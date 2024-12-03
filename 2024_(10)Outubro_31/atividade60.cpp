/*1 - Crie uma função que busca um número em um vetor de inteiros e retorna a
posição em que o número está, caso o número não seja encontrado,
a fuçõa retorna -1. */

#include <iostream>
#include <locale>


int busca (int vet[],int num ) {
	for (int i=0; i<=sizeof(vet); i++) {
		if (vet[i]==num){
			return i;
		}
	}
	return -1;
}

using namespace std;

int main () 
{
	setlocale(LC_ALL,"portuguese");
	int vet[5] = {34,56,6,10,21};
	int val;
	
	cout << "Informe o valor a ser localizado: "; 
	cin >> val;
	if (busca(vet, val) >=0){
		cout << "O valor está na posição "<< busca(vet,val);
	} else {
		cout << "Essa valor não foi encotrado!";
	}
	
	return 0;
}