#include <iostream>

using namespace std;

struct TProduto {
	string nome;
	float preco;
	int quantidade;
};

int main()
{
	setlocale(LC_ALL,"portuguese");
	TProduto prod[5];
	for (int x=1; x<5; x++)
	{
		cout << "Digite o nome do produto: "; cin >> prod[x].nome;
		cout << "Digite o preço do produto: "; cin >> prod[x].preco;
		cout << "Digite a quantidade do produto: "; cin >> prod[x].quantidade;
		cout << endl;
	}
	cout << "\nPrdutos : \n";
	for (int x=1; x<5; x++)
	{
		cout << "------------------\n";
		cout << "Nome do produto: " << prod[x].nome;
		cout << "Preço do produto: " << prod[x].preco;
		cout << "Quantidade do produto: " << prod[x].quantidade;
		cout << endl;
	}
	return 0;
}