#include <iostream>
#include <locale>

using namespace std;

int calcularArea (int lado) {
	return lado * lado;
}

float calcularArea (float a, float b) {
	return a * b;
}

float calcularArea (float raio) {
	return 3.14*raio*raio;
}




int main()
{
	setlocale(LC_ALL, "portuguese");
	float raio=4, base=6, altura=7;
	int ladoq=5;
	cout << "�rea do quadrado = " << calcularArea(ladoq) << endl;
	cout << "�rea do retangulo = " << calcularArea(base,altura) << endl;
	cout << "�rea do circulo = " << calcularArea(raio) << endl;
	return 0;
}