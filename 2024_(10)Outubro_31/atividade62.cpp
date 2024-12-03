/*3 - Codifique uma função que verifique se um valor é perfeito ou não.
Um valor é dito perfeito quando ele é igual a soma dos seus divisores (exceto ele mesmo).
Exemplo: 6 é perfeito, 6=1+2+3, que são seus divisores. A função deve retornar
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
		cout << "Valor informado é perfeito";
	}
	else {
		cout << "Valor informado não é perfeito";
	}
	return 0;	
}