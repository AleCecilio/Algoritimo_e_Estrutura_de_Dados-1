#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float n1, n2;  // Corrigido: adicionado ponto e v�rgula

    cout << "Informe o primeiro n�mero: ";
    cin >> n1;

    cout << "Informe o segundo n�mero: ";
    cin >> n2;

    if (n2 == 0) {
        cout << "Divisor incorreto" << endl;
    } else {
        cout << "Resultado: " << (n1 / n2) << endl;
    }

    return 0;
}
