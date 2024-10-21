#include <iostream>
#include <locale>
#include <string>

using namespace std;

int NumeroDeDigitos (int x) {
	int numDig;
	numDig = to_string(x).size();
	return numDig;
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int num;
	cout << "Digite um Número Inteiro: > "; 
	cin >> num;
	cout <<  endl;
	cout << "O Número '" << num << "' tem " << NumeroDeDigitos(num) << " dígitos.";
	  
	
	return 0;
}