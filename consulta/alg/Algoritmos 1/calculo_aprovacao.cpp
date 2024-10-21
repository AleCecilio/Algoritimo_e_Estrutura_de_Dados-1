#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    float n1, n2, n3, m;
    
    cout << "Informe a primeira nota: "; cin >> n1;
    cout << "Informe a segunda nota: "; cin >> n2;
    cout << "Informe a terceira nota: "; cin >> n3;

    m = (n1 + n2 + n3) / 3;

    cout << "Nota final: " << m << endl;

    if (m >= 6){
        cout << "APROVADO" << endl;
    }else{
        cout << "REPROVADO" << endl;
    }

    return 0;
}
