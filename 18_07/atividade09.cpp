#include <iostream>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "portuguese");
	int usu, soma=0; 
	float pacote;
	
	cout << "Digite o n�mero de usu�rios: "; cin >> usu;
	int idade[usu];
	cout << "Digite o valor do pacote: "; cin >> pacote;
	for (int i=1; i<=usu; i++)
	{
		cout << "Idade do usu�rio"<<i<<": ";
		cin >> idade[i-1];
		soma += idade[i-1];
	}
	float val = pacote/soma;
	for (int i=0;i<usu;i++)
	{
		cout << "Usu�rio "<<(i+1)<<" R$"<<(val*idade[i]) << endl;
	}
	
	return 0;
}