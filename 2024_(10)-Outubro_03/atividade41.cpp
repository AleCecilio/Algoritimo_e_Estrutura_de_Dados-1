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
	cout << "Digite um N�mero Inteiro: > "; 
	cin >> num;
	cout <<  endl;
	cout << "O N�mero '" << num << "' tem " << NumeroDeDigitos(num) << " d�gitos.";
	  
	
	return 0;
}