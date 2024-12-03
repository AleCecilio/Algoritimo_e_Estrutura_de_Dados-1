#include <iostream>
#include <locale>

using namespace std;

int contarDigitosPares(int numero){
	int aux;
	if (numero==0) {
		return 0;
	}
	aux = numero % 10;
	if (aux%2== 0) {
		return 1 + contarDigitosPares(numero/10);
	}
	else {
		return 0 + contarDigitosPares(numero/10);
		
	}
}


int main()
{
	setlocale(LC_ALL,"portuguese");
	int num;
	cout << "Digite um Número Inteiro Positivo: > ";
	cin >> num;
	
	cout << endl;
	cout << "Há " << contarDigitosPares(num) << " digito(s) pare(s).\n";
	
	return 0;
}