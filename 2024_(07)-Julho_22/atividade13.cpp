/*
2 - Fa�a  um programa que receba n�meros enquanto o usu�rio n�o digita o valor 0(zero), calcule a soma dos valore lidos.
 */
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int val, soma=0;
	do 
	{
		cout << "Digite o valor (Caso deseje encerrar a soma digite '0'):";
		cin >> val;
		soma +=val;
	}while (val!=0);
	cout << "Somat�rio = "<<soma;
	return 0;
}