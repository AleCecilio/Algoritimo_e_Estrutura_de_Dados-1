#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	string texto;
	cout << "Digite uma mensagem qualquer: ";
	getline(cin, texto);


	ofstream arq;  //associa para somente esrita
	arq.open("dados.dat", ios::out | ios:: app);
	arq << texto << "\n";
	cout << "Digite mais uma mensagem: ";
	getline(cin, texto);
	arq << texto << "\n";
	arq.close();

	ifstream dados; //associa para somente leitura
	dados.open("dados.dat");
	if (dados.is_open()) //retorna verdadeiro de abriu o arquivo
	{
		while (!dados.eof()) { //enquanto não for final de arquivos
			getline(dados, texto);
			cout << texto << endl;
		}
	} else 
	{
		cout << "Arquivo inexistente!";
	}
	dados.close();
	
	return 0;
}