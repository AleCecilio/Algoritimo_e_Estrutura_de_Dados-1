//Escreva um programa que pe�a ao usu�rio n�meros inteiros e os some at� que a soma seja maior que 100.
#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, soma = 0;
	
	do{
		cout<<"N�mero inteiro: "; cin>>n;
		soma = soma + n;
	}while(soma <= 100);
	
	cout<<"SOMA: " <<soma;
	
	return 0;
}