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
        cout << "São múltiplos" << endl;
    } else {
        cout << "Não são múltiplos" << endl;
    }

    return 0;
}
