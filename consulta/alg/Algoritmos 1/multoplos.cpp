#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int a, b;
    cout << "Informe um valor inteiro: ";
    cin >> a;
    cout << "Informe um segundo valor inteiro: ";
    cin >> b;

    if (a % b == 0 || b % a == 0) {
        cout << "S�o m�ltiplos" << endl;
    } else {
        cout << "N�o s�o m�ltiplos" << endl;
    }

    return 0;
}
