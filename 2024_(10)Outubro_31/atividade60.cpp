/*1 - Crie uma fun��o que busca um n�mero em um vetor de inteiros e retorna a
posi��o em que o n�mero est�, caso o n�mero n�o seja encontrado,
a fu��a retorna -1. */

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
		cout << "O valor est� na posi��o "<< busca(vet,val);
	} else {
		cout << "Essa valor n�o foi encotrado!";
	}
	
	return 0;
}