#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>

using namespace std;

int NumeroAleatorio (int min, int max) {
	return min + rand() % ((max +1) - min);
}




int main()
{
	setlocale(LC_ALL,"portuguese");
	srand(time(0));
	int inicio, fim;
	cout << "Digite o Primeiro Númeor do Intervalo: > ";
	cin >> inicio;
	cout << "Digite o Último Número do Intervalo: > ";
	cin >> fim;
	cout << "----------------------------------------\n";
	cout << "Número Aleatório entre '" << inicio << "' e '" << fim << "': " << NumeroAleatorio(inicio,fim);	
	cout << "----------------------------------------\n";
	cout << endl;
	return 0;
}