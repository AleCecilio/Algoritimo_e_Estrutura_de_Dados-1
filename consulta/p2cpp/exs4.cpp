//Escreva um programa que peça ao usuário números inteiros e os some até que a soma seja maior que 100.
#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, soma = 0;
	
	do{
		cout<<"Número inteiro: "; cin>>n;
		soma = soma + n;
	}while(soma <= 100);
	
	cout<<"SOMA: " <<soma;
	
	return 0;
}