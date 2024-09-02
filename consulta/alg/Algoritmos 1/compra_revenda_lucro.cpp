#include <iostream>
#include <locale>
using namespace std;

int main()
{
    float compra, revenda, taxadelucro;

    cout << "VALOR DO PRODUTO: " << endl;
    cin >> compra;

    cout << "TAXA DE LUCRO (%): " << endl;
    cin >> taxadelucro;

    revenda = compra + compra * taxadelucro / 100;
    cout << "REVENDA: R$ " << revenda << endl;

    int opc;
    cout << "QUAL A FORMA DE PAGAMENTO" << endl;
    cout << "1 PARA PAGAMENTO À VISTA E 2 PARA PAGAMENTO PARCELADO: ";
    cin >> opc; // Corrigido: faltava um ponto e vírgula

    if (opc == 1)
    {
        cout << "Valor final à vista R$: " << (revenda * 0.95) << endl;
    }
    else if (opc == 2)
    {
        int parcelas;
        cout << "Quantas parcelas? : ";
        cin >> parcelas;
        
        if (parcelas > 0)
        {
            cout << "Valor das parcelas R$: " << (revenda / parcelas) << endl;
        }
        else
        {
            cout << "Número de parcelas inválido!" << endl;
        }
    }
    else
    {
        cout << "Opção de pagamento inválida!" << endl;
    }

    return 0;
}
