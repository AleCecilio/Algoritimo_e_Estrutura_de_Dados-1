#include <iostream>
#include <locale>

using namespace std;

int multiplicar (int a, int b) {
	return a * b;
}

float multiplicar (float a, float b) {
	return a * b;
}

double multiplicar (double a, double b) {
	return a * b;
}



int main()
{
	setlocale(LC_ALL,"portuguese");
	int x, y;
	float a, b;
	double n1, n2;
	
	cout << "Digite 2 números Inteiros: > ";
	cin >> x >> y;
	cout << multiplicar(x,y);
	cout << "Digite 2 números flutuantes: >";
	cin >> a >> b;
	cout << multiplicar(a,b);
	cout << "Digite 2 números double: >";
	cin >> n1 >> n2;
	cout << multiplicar(n1,n2);
	
	return 0;
}