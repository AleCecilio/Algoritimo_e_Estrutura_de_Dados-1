#include <iostream>
#include <locale>

using namespace std;

int somaPositivos (int n) {
	if (n == 1) {
		return 1;
	} else {
		return n + somaPositivos(n-1);
	}
	
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int n;
	cout << "Digite um número Inteiro Positivo: > ";
	cin >> n;
	cout << somaPositivos(n);
	return 0;
}