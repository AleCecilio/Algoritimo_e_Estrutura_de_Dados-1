#include <iostream>
#include <locale>

using namespace std;

int fatorial (int x) {
	int fat;
	for (int i=x-1; i >0; i--) {
		fat = x * i;
		x = fat;
	}
	return x;
}



int main()
{
	setlocale(LC_ALL, "portuguese");
	int num;
	cout << "Digite um Número Inteiro: > ";
	cin >> num;
	cout << "-----------------------\n";
	cout << "O Fatorial de " << num << " é: " << fatorial(num) <<"|\n";
	cout << "-----------------------";
	return 0;
}