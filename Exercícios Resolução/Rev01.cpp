/*
Escreva um programa que leia do teclado o 
valor de um produto, a taxa de desconto e 
imprima o valor final.
*/
#include <iostream>
using namespace std;

int main()
{
	float valorp, taxa, valorf;
	cout << "Informe o valor do produto: R$";
	cin >> valorp;
	cout << "Informe a taxa de desconto: ";
	cin >> taxa;
	while(taxa >20)
	{
	   cout << "Taxa inválida.Informe a taxa novamente: ";
	   cin >> taxa;	
	}
	valorf = valorp - (valorp*taxa/100);
	cout << "Valor final = R$"<<valorf;
	return 0;
}