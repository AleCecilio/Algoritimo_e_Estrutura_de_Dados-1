#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL,"portuguese");
	int num,soma=0;
	cout << "Digite um número: "; cin >> num;
	while (num != 0)
	{
		cout << "Digite um número: "; cin >> num;
		soma +=num;
	}
	cout << "Soma: " << soma;
	   
	   	
	return 0;
}