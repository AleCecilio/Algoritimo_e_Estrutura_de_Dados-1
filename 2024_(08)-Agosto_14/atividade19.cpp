/* 1 - Criar estrutura Produto: nome, preço e quantidade.
Faça cadastro de alguns produtos, APÓS cadastro lista os dados lidos*/
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
	cout << "Preço: "; cin >> prods[x].preco;
	cout << "Quantidade: "; cin >> prods[x].quantidade;
	}
	cout << "Dados Cadastrados \n";
	for (int x=0;x<5;x++)
	{
    cout << "------------------\n";
	cout << "\nNome do produto: " << prods[x].nome<<endl;
	cout << "Preço: "  << prods[x].preco <<endl;
	cout << "Quantidade: "<< prods[x].quantidade <<endl;
	cout << endl;
	}
	
	return 0;
}