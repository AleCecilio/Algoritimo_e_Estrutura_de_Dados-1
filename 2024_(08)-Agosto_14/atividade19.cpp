/* 1 - Criar estrutura Produto: nome, pre�o e quantidade.
Fa�a cadastro de alguns produtos, AP�S cadastro lista os dados lidos*/
#include <iostream>

using namespace std;

struct TProduto {
	string nome;
	float preco;
	float quantidade;
};

int main()
{
	setlocale (LC_ALL,"portuguese");
	TProduto prods[5];
	for (int x=0;x<5;x++)
	{
	cout << "Nome do produto: "; cin >>  prods[x].nome;
	cout << "Pre�o: "; cin >> prods[x].preco;
	cout << "Quantidade: "; cin >> prods[x].quantidade;
	}
	cout << "Dados Cadastrados \n";
	for (int x=0;x<5;x++)
	{
    cout << "------------------\n";
	cout << "\nNome do produto: " << prods[x].nome<<endl;
	cout << "Pre�o: "  << prods[x].preco <<endl;
	cout << "Quantidade: "<< prods[x].quantidade <<endl;
	cout << endl;
	}
	
	return 0;
}