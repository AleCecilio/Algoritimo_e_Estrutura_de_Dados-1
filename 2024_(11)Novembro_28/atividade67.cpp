#include <iostream>
#include <locale.h>
#include <fstream>
#include <string>

using namespace std;


void AdicionarAnotacao () {
	ofstream arquivo("diario.txt", ios::app);
	if (arquivo.is_open()) {
		string data;
		string texto;
		cout << "Diite a data (AAAA-MM-DD): ";
		cin >> data;
		cout << "Digite o Texto: ";
		cin.ignore();
		getline(cin,texto); 
		arquivo << data << ";" << texto << endl;
		arquivo.close();
		cout << "Registro armazenado!\n";
	} else {
		cerr << "Erro ao abrir o arquivo!\n";
	}
}


void ExibirAnotacoes () {
	fstream arquivo("diario.txt");
    if (arquivo.is_open()) {
        string data, texto;
        cout << "\nRegistrados do diário:\n";
        cout << "-------------------------\n";
        while (getline(arquivo, data, ';')) {
            if(getline(arquivo, texto))
              cout << "Data: " << data << ", Texto: " << texto << "\n";
        }
        arquivo.close();
    } else {
        cerr << "Erro ao abrir o arquivo!\n";
    }	
	
}

void BuscarAnotacoes () {
	string palavra;
	cout << "Digite a palavra chave: ";
	cin >> palavra;
	ifstream arquivo("diario.txt");
	if (arquivo.is_open()) {
		string data,texto;
		while (getline(arquivo,data, ';')) {
			if (getline(arquivo, texto)) {
				int pos = texto.find(palavra);
				if (pos >= 0) {
					cout << texto << endl;
				}
			}
		}
		arquivo.close();
	} else {
		cerr << "Erro ao abrir o arquivo!\n";
	}
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int op=0;
	do {
		cout << "Diário Pessoal: \n";
		cout << "1 - Adicionar Nova Anotação\n";
		cout << "2 - Exibir Anotações \n";
		cout << "3 - Buscar Anotação \n";
		cout << " > "; cin >> op;
		switch(op)
		{
		case 1:
			AdicionarAnotacao();
			break;
		case 2:
			ExibirAnotacoes();
			break;
		case 3:
			BuscarAnotacoes();
			break;
		case 4: 
			cout << "Finalizando...";
			break;
		default:
			cerr << "Erro, Opção Inválida!\n";
			break;
		}
		
	}while(op!=4);
	return 0;
}