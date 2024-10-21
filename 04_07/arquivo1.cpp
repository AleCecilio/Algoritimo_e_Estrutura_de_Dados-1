#include <iostream>
using namespace std;

int main ()
{
	float valorp, taxa, valorf;
	cout << "informe o valor do produto: R$";
	cin >> valorp;
	cout << "Informe a taxa: (%)";
	cin >> taxa;
	while (taxa > 20)
	{
		cout << "Taxa invalida escrev uma taxa menor que 20:";
	    cin >> taxa;
	}
	valorf = valorp - (valorp*taxa/100);
	cout << "O valor final com o desconto é de:"<<valorf;
	return 0;
}
