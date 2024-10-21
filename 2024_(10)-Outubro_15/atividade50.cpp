#include <iostream>
#include <locale>

using namespace std;

void ordenar (int &a, int &b){
 	(b < a) ? cout << b << " " << a : cout << a << " " << b;
}

int main()
{
	setlocale(LC_ALL,"pt_BR.UTF-8");
	int a, b;
	cout << "Digite dois números inteiros: > ";
	cin >> a >> b;
	ordenar(a,b);
	return 0;
}