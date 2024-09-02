#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    int idade;
    cout << "Informe a idade: ";
    cin >> idade;

    if (idade >= 5 && idade <= 7) {
        cout << "Infantil A";
    } else if (idade >= 8 && idade < 10) {
        cout << "Infantil B";
    } else if (idade >= 11 && idade < 13) {
        cout << "Juvenil A";
    } else if (idade >= 14 && idade < 17) {
        cout << "Juvenil B";
    } else if (idade >= 18) {
        cout << "Adulto";
    } else {
        cout << "Idade fora da faixa considerada";
    }

    cout << endl; // Nova linha para melhorar a formatação

    return 0;
}
