#include <iostream>
#include <locale>

using namespace std;

int fibonacci(int n) {
	int a = 0, b = 1, c;
	
	if (n==0) return a;
	for (int i=2;i <= n;i++) {
		  c = a + b;
		  a = b;
		  b = c; 	
	}	
	return b;
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