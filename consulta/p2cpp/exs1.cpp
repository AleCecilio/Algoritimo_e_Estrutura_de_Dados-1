//Escreva um programa que some os n�meros de 1 a N, onde N � fornecido pelo usu�rio.

#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, soma = 0;
	
	cout<<"Insira o valor do n�mero de onde a soma deve finalizar: "; cin>>n;
	
	for(i=1; i<=n; i++){
		soma = soma + i;
	}
	
	cout<<"A soma dos n�mero de 1 a " << n << " � " <<soma;
	
	return 0;
}