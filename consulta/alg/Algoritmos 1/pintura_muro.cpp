#include <iostream>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float valor_lata = 235, litros, alt, comp, gasto;

    cout << "INFORME A ALTURA DO MURO (em metros): ";
    cin >> alt;

    cout << "INFORME O COMPRIMENTO DO MURO (em metros): ";
    cin >> comp;

    litros = (alt * comp) / 4; // calcula quantidade de litros para pintar a �rea
    gasto = litros * (valor_lata / 18);

    cout << "SER�O NECESS�RIOS " << litros << " LITROS, QUE CUSTAR�O R$ " << gasto << endl;

    return 0;
}
