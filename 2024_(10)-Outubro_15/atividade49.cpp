#include <iostream>
#include <locale>

using namespace std;

void imprimir (int a) {
	cout << "Inteiro > " << a << endl;
}

void imprimir (float a) {
	cout << "Float: > " << a << endl;
}

void imprimir (string a) {
	cout << "String: > " <<  a << endl;
}

void imprimir (const int a[], int tam) {
	cout << "Arrays de Inteiros: > "; 
	for (int i=0; i < tam; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}


int main()
{
	setlocale(LC_ALL,"portuguese");
	int x=18;
	float y=3.14;
	string z="Aqui é Galo P*rra!!!";
	int array[]={1,2,3,4,5};
	imprimir(x);
	imprimir(y);
	imprimir(z);
	imprimir(array, 5);
	
	
	return 0;
}