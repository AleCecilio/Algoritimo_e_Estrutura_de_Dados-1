#include <iostream>
#include <locale>
using namespace std;

int main ()
{
    // Peso ideal
    setlocale(LC_ALL, "portuguese");

    float altura;
    char sexo;

    cout << "INFORME SUA ALTURA: "; 
    cin >> altura;

    cout << "INFORME SEU SEXO (F/M): "; 
    cin >> sexo;

    if (sexo == 'F' || sexo == 'f') 
    {
        cout << "Peso ideal= " << (62.1 * altura - 44.7) << " kg" << endl;
    } 
    else if (sexo == 'M' || sexo == 'm') 
    {
        cout << "Peso ideal= " << (72.1 * altura - 58) << " kg" << endl;
    } 
    else 
    {
        cout << "SEXO INVÁLIDO. REINICIE A APLICAÇÃO E TENTE NOVAMENTE." << endl;
    }

    return 0;
}
