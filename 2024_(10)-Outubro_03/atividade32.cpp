#include <iostream>
#include <locale>

using namespace std;
int inverteNumero(int n) {
       int invertido = 0;
       while (n != 0) {
           invertido = invertido * 10 + n % 10;
           n /= 10;
       }
       return invertido;
   }


int main() {
	setlocale (LC_ALL,"portuguese");
	int x;
	cout << "Digite os números " ;
	cin >> x;
	cout << inverteNumero(x);
	return 0;
}