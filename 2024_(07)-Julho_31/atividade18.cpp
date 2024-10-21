/*
Crie um programa que simule uma agenda telef�nica.Este programa dever? 
armazenar nome, n�mero de telefone e email de no m�ximo 20 pessoas.
Possiblite o cadastro e busca por nome.
*/
#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL,"portuguese");
	string nome[20], email[20], tel[20], busca;
	int x=1, op, opi=0;
	do {
		cout << "AGENDA DE TELEF�NE\n";
		cout << "Op��o:\n";
		cout << "1 - Cadastro\n";
		cout << "2 - Busca\n";
		cout << "3 - Sair\n";
		cin >> op;
		cout << endl;
		switch(op)
		{
		case 1:
			cout << "Cadastro de Usu�rios\n";
			if (x<=19)
			{
				cin.ignore();
				cout << "Nome: "; getline(cin,nome[x]);
				cout << "Telefone: ";
				cin >> tel[x];
				cout << "E-mail: ";
				cin >> email[x];
				x+=1;
			}
			else
			{
				cout <<"M�moria cheia\n";
			}
			break;
		case 2:
			cout << "BUSCA POR USU�RIOS\n";
			cout << "Digite o nome do usu�rio:\n";
			cin >> busca;
			cout << endl;
			for(int n=0; n <x; n++)
			{
				if (busca==nome[n])
				{
					cout << "E-mail: " << email[n]<<endl;
					cout << "Celular: " <<tel[n]<<endl;
					cout << endl;
				}
				else 
				{
					opi +=1;
					
				}
			}
			if (opi ==x)
			{
				cout << "Usu�rio n�o cadastrado\n";
				cout << endl;
			}
			break;
		case 3:
			cout << "Encerrando prgrama\n";
			break;
		default:
			cout << "Op��o Inv�lida\n";
			break;
		}
	}while(op!=3);
	
	
	
	return 0;
}