#include <iostream>

using namespace std;

int main(){
	 setlocale(LC_ALL, "portuguese");
	 float cont, soma=0;
	 while (cont != 0)
	 {
	 	cout << "Digite o valor para a soma ou quando acabar digite '0': "; cin >> cont;
		soma = soma + cont; 
	 }
	 cout << "O resultado da soma é "<<soma;
	return 0;
}