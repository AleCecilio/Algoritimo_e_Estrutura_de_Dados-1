#include <iostream>
#include <locale>

using namespace std;

int main()
{
	int matriz[5][5], x=0;
	bool achou;
	for (int lin=0;lin<5;lin++)
	{
		cout << "Valores de Linha "<<lin+1<<": ";
		cin >> matriz[lin][0]>>matriz[lin][1]>>matriz[lin][2]>>matriz[lin][3]>>matriz[lin][4];
	}
	cout << "Valor a pesquisar: "; 
	cin >> x;
	for (int lin=0;lin<5;lin++)
	{
		for (int col=0;col<5;col++)
		{
			if (matriz[lin][col] = x)
			{
				cout << "Linha: "<<lin <<endl;
				cout << "Coluna: "<<col <<endl;
				achou = true;
			}
		}
	}
	if (!achou) 
		cout << "Não encontrado!";
	return 0;
}