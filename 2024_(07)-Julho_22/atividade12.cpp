/* 
1 - Crie um programa que receba 5 números e calcule a soma de seus valores. Utilize o comando do/while.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int val, soma=0, cont=0;
	do
	{
		cout << "Digite o valor: ";
		cin >> val;
		cont++;
		soma+=val;
	}while(cont<5);
	
	cout << "Somatório = " <<soma;
	return 0;
}