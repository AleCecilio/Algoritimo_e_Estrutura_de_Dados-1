//Escreva um programa que calcule o fatorial de um n�mero inteiro positivo N, fornecido pelo usu�rio.
#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, n, fatorial = 1;
	
	cout<<"FATORIAL: "; cin>>n;
	
	for(i=1; i<=n; i++){
		fatorial = fatorial*i;
	}
	
	cout<<fatorial;
	
	return 0;
}