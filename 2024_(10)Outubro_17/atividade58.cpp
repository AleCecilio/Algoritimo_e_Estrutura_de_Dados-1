#include <iostream>
#include <locale>

using namespace std;

int contDigitos (int x) {
	if (x == 0) {
		return 1;
	} else {
		return 1 + contDigitos(x / 10);
	}
}


int main () {
	setlocale(LC_ALL,"portuguese");
	int x;
	cout << "Digite um n�mero inteiro: > ";
	cin >> x;
	
	cout << "H� " << contDigitos(x) << " digitos no n�mero " << x;
}