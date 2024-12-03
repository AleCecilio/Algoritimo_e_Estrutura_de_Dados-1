/*3 - Codifique uma fun��o que verifique se um valor � perfeito ou n�o.
Um valor � dito perfeito quando ele � igual a soma dos seus divisores (exceto ele mesmo).
Exemplo: 6 � perfeito, 6=1+2+3, que s�o seus divisores. A fun��o deve retornar
um valor booleano.
*/

#include <iostream>
#include <locale>

using namespace std;

bool verificaPereito (int valor) {
	int soma=0;
	for (int x=1; x<=(valor)/2; x++) {
		if (valor % x ==0) {
			soma +=x;
		}
		if (soma==valor){
			return true;
		}
		else {
			return false;
		}
	}
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int num;
	cout << "informe um valor: ";
	cin >> num;
	bool perfeito = verificaPereito(num);
	if(perfeito) {
		cout << "Valor informado � perfeito";
	}
	else {
		cout << "Valor informado n�o � perfeito";
	}
	return 0;	
}