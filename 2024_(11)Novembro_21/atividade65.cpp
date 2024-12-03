#include <iostream>
#include <fstream>
#include <string>
#include <locale.h>

using namespace std;

struct TProduto {
	string nome;
	float quant;
	float preco;
};

void cadastrarProduto() {
	TProduto produto;
	cout << "Cadastro de produtos Tabajara:\n";
	ofstream arquivo;
	arquivo.open("produtos.txt", ios::app); 
	cout << "Nome:";
	cin.ignore();
	getline(cin,produto.nome);
	cout << "Quantidade: ";
	cin >> produto.quant;
	cout << "Preco(R$): ";
	cin >> produto.preco;
	arquivo << produto.nome << ";" << produto.quant << ";" << produto.preco<<"\n";
	arquivo.close();
}

void listarProduto() {
	TProduto produto;
	cout << "Listagem de produtos Tabajara:\n";
	ifstream arquivo;
	string linha;
	arquivo.open("produtos.txt");
	while (getline(arquivo,linha)) //while (!arquivo.eof()) { getline(arquivo, linha); 
	{
		int pos1 = linha.find(";");
		int pos2 = linha.find(";",pos1+1);
		
		produto.nome = linha.substr(0,pos1);
		produto.quant = stof(linha.substr(pos1+1, pos2-1-pos1));
		produto.preco = stof(linha.substr(pos2+1));
		cout << produto.nome << "\t"<<produto.quant<<"\t"<<produto.preco<<"\n";
	}
	arquivo.close();
}

void buscarProduto() {
	string nome;
	cout << "Busca de produtos Tabajara:\n";
	cout << "Informe o nome do produto a ser consultado: ";
	cin >> nome;
	TProduto produto;
	ifstream arquivo;
	string linha;
	bool achei=false;
	arquivo.open("produtos.txt");
	while (getline(arquivo,linha))
	{
		int pos1 = linha.find(";");
		int pos2 = linha.find(";",pos1+1);
		
		produto.nome = linha.substr(0,pos1);
		if(produto.nome==nome) 
		{
			produto.quant = stof(linha.substr(pos1+1, pos2-1-pos1));
			produto.preco = stof(linha.substr(pos2+1));
			cout << produto.nome << "\t"<<produto.quant<<"\t"<<produto.preco<<"\n";
			achei = true;
		}
	}
	if (!achei)
		cout << "Produto não cadastrado!!";
	arquivo.close();
	
}


int main(){
	setlocale(LC_ALL,"portuguese");
	
	int op=0;
	
	do 
	{
		
		cout << "Sistema Tabajara Produtos\nFunções: \n";
		cout << "1-Cadastrar novo produto\n";
		cout << "2-Listar produtos cadastrados\n";
		cout << "3-Buscar produto pelo nome\n";
		cout << "4-Sair\nInforme sua opção:";
		cin >> op;
		switch(op)
		{
		case 1:
			cadastrarProduto();
			break;
		case 2:
			listarProduto();
			break;
		case 3: 
			buscarProduto();
			break;
		case 4:
			cout << "FIMMMMMMMMMMMMMMMMM";
		default: cout << "Opção Inválida!";
			break;
		}
	}while(op!=4);
	
	
	return 0;
}