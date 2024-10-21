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
	cout << "Digite um número inteiro: > ";
	cin >> x;
	
	cout << "Há " << contDigitos(x) << " digitos no número " << x;
}