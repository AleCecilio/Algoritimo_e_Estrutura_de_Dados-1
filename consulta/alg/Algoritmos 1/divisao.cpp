#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float n1, n2;  // Corrigido: adicionado ponto e vírgula

    cout << "Informe o primeiro número: ";
    cin >> n1;

    cout << "Informe o segundo número: ";
    cin >> n2;

    if (n2 == 0) {
        cout << "Divisor incorreto" << endl;
    } else {
        cout << "Resultado: " << (n1 / n2) << endl;
    }

    return 0;
}
