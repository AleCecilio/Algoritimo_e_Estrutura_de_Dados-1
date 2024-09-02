#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int num, soma=0;
	cout << "Digite o número: "; cin >> num;
	for (int x=1; x<num; x++)
	{
		if (num%x==0)
		{
			soma +=x;
		}
	}
	cout << "Soma dos Divisores: " <<soma;
	return 0;
}