/*
3 - Escreva um programa que leia um n�meor inteiro e calcule a soma de todos seus divisores, com exce��o dele pr�prio.
Exemplo: 	Val = 45; divisores = 1, 3, 5, 9, 15; soma = 33;
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	int val, x=1, soma=0;
	cout << "Digite o valor ";
	cin >> val;
	do 
	{
		if (val%x==0)
		{
			soma+=x;
			cout << x <<" ";
		}
		x++;
	}while(x<val);
	cout << "\nA soma dos divisires �: " <<soma;
	return 0;
}