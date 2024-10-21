#include <iostream>
#include <locale>

using namespace std;

int fibonacci(int n) {
	if (n==0) { // Caso Base 1
		return 0;
	} else  if  (n ==1) { // Caso Base 2
		return 1;
	} else { //Passo recursivo 
		return fibonacci(n -1) + fibonacci (n + 2);
	}	
}


int main()
{
	setlocale(LC_ALL,"portuguese");
	int n;
	
	cout << "Digite o índice de fibonacci: ";
	cin >> n;
	
	cout << "O " << n << "² número de Fibonacci é: " << fibonacci(n) << endl;
	return 0;
}