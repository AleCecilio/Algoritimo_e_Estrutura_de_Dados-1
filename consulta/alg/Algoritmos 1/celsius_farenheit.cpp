#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;

    cout << "CONVERSOR DE TEMPERATURA\n";
    cout << "Informe a temperatura em graus Celsius: ";
    cin >> celsius;

    fahrenheit = (9 * celsius / 5) + 32;

    cout << "Temperatura em Fahrenheit: " << fahrenheit << " °F" << endl;

    return 0;
}
