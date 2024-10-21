#include <iostream>
#include <locale>

using namespace std;

float mdc (int x, int y) {
	int resto;
	while ((x % y) > 0)
	{
		resto = x % y;
		x = y;
		y = resto;
	}
	return y;
}


int main()
{
	setlocale (LC_ALL,"portuguese");
	int n1, n2;
	cout << "Digite dois números inteiros:\n";
	cout << "Primeiro Número: > "; cin >> n1;
	cout << "Segundo Número: > "; cin >> n2;
	cout << "---------------------------------------------\n";
	cout << "O Máximo Divisor Comum (MDC) de " << n1 << " e " << n2 << " é: " << mdc(n1,n2) << "|\n";
	cout << "---------------------------------------------\n";
	return 0;
}