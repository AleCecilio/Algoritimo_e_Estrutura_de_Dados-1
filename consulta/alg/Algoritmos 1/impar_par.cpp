#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n1;
    cout << "Informe n1: ";
    cin >> n1;

    if (n1 % 2 == 0)
    {
        if (n1 < 0)
            cout << n1 << " � par negativo";
        else if (n1 > 0)
            cout << n1 << " � par positivo";
        else
            cout << "N1 � par neutro";
    }
    else
    {
        if (n1 < 0)
            cout << n1 << " � �mpar negativo";
        else
            cout << n1 << " � �mpar positivo";
    }

    cout << endl; // Adicionando uma nova linha para melhorar a formata��o

    return 0;
}
