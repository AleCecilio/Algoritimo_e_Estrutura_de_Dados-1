#include <iostream>
#include <locale>

using namespace std;


float CelsiusParaFahrenheit (float cel) {
	float fah;
	fah = (cel * 1.8) + 32;
	return fah;
}
int main()
{
	setlocale(LC_ALL,"portuguese");
	float grausC;
	cout << "Digite a Temperatura em Graus Celsius (°C): ";
	cin >> grausC;
	cout << "-----------------------\n";
	cout << grausC << "°C equivale a " << CelsiusParaFahrenheit(grausC) << "°F|\n";   
	cout << "-----------------------";
	return 0;
}