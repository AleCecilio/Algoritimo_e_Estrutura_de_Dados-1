#include <iostream>
#include <locale>

using namespace std;

int  fatorial(int n) {
	if (n<=1) { //caso base
		return 1;
	} else { //Passo recursivo 
		return n * fatorial(n - 1);
	}
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int numero;
	cout << "Digite um número: ";
	cin >> numero;
	
	cout << "O fatorial de " << numero << " é " << fatorial(numero) << endl;
	return 0;
}