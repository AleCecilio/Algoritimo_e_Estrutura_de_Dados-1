#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int valor=0, d;
    cout << "Digite um número entre 5 e 155: "; 
	cin >> valor;
    while (valor<5||valor>155)
	{
		 cout << "Digite um número entre 5 e 155: "; 
		 cin >> valor;
	}
	d = valor*2;
	cout << d;
	
	return 0;
}