#include <iostream>
#include <locale>
using namespace std;

int main()
{
    int compra, p;

    setlocale(LC_ALL, "portuguese");
    cout << "VALOR TOTAL DA COMPRA: ";
    cin >> compra;
    cout << "Escolha a forma de pagamento: " << endl;
    cout << "1- DINHEIRO " << endl;
    cout << "2- CARTAO A VISTA " << endl;
    cout << "3- CARTAO PARCELADO" << endl;
    cin >> p;

    switch(p)
    {
        case 1:
            compra = compra * 0.9; // Desconto de 10% para pagamento em dinheiro
            break;
        case 2:
            compra = compra * 0.95; // Desconto de 5% para pagamento com cart�o � vista
            break;
        case 3:
            // Sem desconto para pagamento parcelado
            break;
        default:
            cout << "Op��o inv�lida!" << endl;
            return 1; // Encerrar o programa com c�digo de erro
    }

    cout << "Valor total ap�s aplicar a forma de pagamento: " << compra << endl;

    return 0;
}
