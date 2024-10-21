//Escreva um programa que some os números de 1 a N, onde N é fornecido pelo usuário.

#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, soma = 0;
	
	cout<<"Insira o valor do número de onde a soma deve finalizar: "; cin>>n;
	
	for(i=1; i<=n; i++){
		soma = soma + i;
	}
	
	cout<<"A soma dos número de 1 a " << n << " é " <<soma;
	
	return 0;
}