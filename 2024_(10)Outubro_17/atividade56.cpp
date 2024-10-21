#include <iostream>
#include <locale>

using namespace std;

int mdc (int a, int b) {
	if (b==0) {
		return a; // Caso base
	} else {
		return mdc(b, a % b); // Caso recursivo
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	int n1, n2;
	
	cout << "Digite dois números inteiros: > ";
	cin >> n1 >> n2;
	
	cout << "O MDC de " << n1 << " e " << n2 << " é " << mdc(n1,n2) << endl;
	
	return 0;
}