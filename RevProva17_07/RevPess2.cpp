/*
Escreva um programa que leia do teclado o 
valor de um produto, a taxa de desconto e 
imprima o valor final.
*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	float vp, taxa, vf;
	
	cout << "Digit o valor do produto: "; cin >>vp;
	cout << "Digite a porcentagem (%) do taxa: "; cin >> taxa;
	
	/*Taxa Elevada Demais*/
	while (taxa >20)
	{
		cout << "\nTaxa inválido.\nInforme a taxa novamente: "; 
		cin >>taxa; 
	}
	
	/*Valor Final*/
	vf = vp -((taxa/100)*vp);
	
	/*Resultado*/
	cout <<endl;
	cout << "Valor Final: " <<vf;
	return 0;
}