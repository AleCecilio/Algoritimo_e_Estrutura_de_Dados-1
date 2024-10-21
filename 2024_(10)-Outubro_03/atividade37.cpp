#include <iostream>
#include <locale>

using namespace std;


int Potencia (int x, int y) {
	int p=1;
	for (int i=0; i < y; i++){
		p = p * x;
	}
	return p;
}


int main () {
	setlocale(LC_ALL,"portuguese");
	int base, expoente;
	cout << "Digite a base: > ";
	cin >> base;
	cout << "Digite o expoente: > ";
	cin >> expoente;
	cout << "--------------------------------------------\n";
	cout << "A potência de " << base << " elevada a " << expoente << " é: " << Potencia(base,expoente);
	return 0;
}