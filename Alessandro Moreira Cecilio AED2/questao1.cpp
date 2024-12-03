#include <iostream>
#include <locale>

using namespace std;

float adicionarProduto (string &nome, float &preco, int &quantidade) {
	float valor;
	cout << "Adicionar Produto:\n";
	cout << "Nome do Produto: ";
	cin >> nome;
	cout << "Preço do Produto: >  R$ ";
	cin >> preco;
	cout << "Quantidade: > ";
	cin >> quantidade;
	valor = preco * quantidade;
	return valor;
}

void exibirCarrinho (string produtos[], float valores[], int numProdutos) {
	cout << "Carrinho de Compras: \n";
	for (int i=0; i<numProdutos;i++) {
		cout << "Produto " << i+1 << ": " << produtos[i] << endl;
		cout << "Valor Total do Produto " << i+1 << ": "  << valores[i] << endl;
		cout << endl;
	}
}

float calcularToralCompra (float valores[], int numProdutos) {
	float ValorTotalCompra=0;
	for (int i=0;i<numProdutos;i++) {
		ValorTotalCompra += valores[i];
	}
	return ValorTotalCompra;	
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int op;
	string produtos[100];
	string nome;
	float preco;
	int quantidade;
	float valores[100];
	int numProdutos=0;
	int aux=0;
	float valorTotal;
	cout << "-------------------------------------\n";
	while (op!=4) {
		cout << "Mercadão Do Ale: \n";
		cout << "1. Adicionar produto ao carrinho.\n";
		cout << "2. Exibir carrinho de compras.\n";
		cout << "3. Finalzar compra e exibir total.\n";
		cout << "4. Sair.\n";
		cout << "> ";
		cin >> op;
		cout << "-------------------------------------\n";
		cout << endl;
		switch(op)
		{
		case 1:
			valores[aux] = adicionarProduto(nome,preco,quantidade);
			produtos[aux] = nome;
			numProdutos +=1;
			aux+=1;
			cout << "-------------------------------------\n";
			cout << endl;
			break;
		case 2: 
			exibirCarrinho(produtos, valores, numProdutos);
			cout << "-------------------------------------\n";
			cout << endl;
			break;
		case 3:
			valorTotal = calcularToralCompra(valores, numProdutos);
			cout << "O valor Total da Compra é de: R$" << valorTotal <<endl;
			cout << "-------------------------------------\n";
			cout << endl;
			break;
		case 4:
			cout << "Encerrando programa ..." << endl;
			cout << "Programa Finalizado!!!" << endl;
			cout << "-------------------------------------\n";
			break;
		default:
		    cout << "Opção Inválida, Tente Novamente." << endl;
		    cout << "-------------------------------------\n";
			cout << endl;
			break;
		}
	}
	
	return 0;
}