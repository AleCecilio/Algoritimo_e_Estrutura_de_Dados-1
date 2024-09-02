#include <iostream>
#include <locale>

using  namespace std;

int main ()
{
    setlocale(LC_ALL,"portuguese");
    float a,b,c;
    cout << "Digite as medidas do triângulo: "; cin >>a >>b >>c;
    if (a==b && b==c && c==a)
        cout << "Este triângulo é  EQUILATERO!!";
    else 
        if (a==b || b==c || c==a)
            cout << "Este triângulo é  ISÓCELES!!";
        else 
            cout << "Este triângulo é ESCALENO!!";
    
    return 0;
}