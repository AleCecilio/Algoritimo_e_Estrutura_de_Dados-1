#include <iostream>

using namespace std;
struct Funcionario
{
	string nome, cargo;
	int idade;
	float salario;
};

int main()
{
	setlocale(LC_ALL,"portuguese");
	Funcionario func[100];
	int x=0, op, num_func=0; 
	float soma=0;
	bool func_inv;
	string pesquisa;
	
	do {
		cout<<"\n-------------------*-------------------" ;
		cout <<endl<< "Menu de Op��es:\n";
		cout << "1.Adicionar Funcion�rio\n";
		cout << "2.Exibir Todos os Funcion�rios\n";
		cout << "3.Buscar Funcion�rio por Nome\n";
		cout << "4.Calcular M�dia Salarial\n";
		cout << "5.Sair\n" ;
		cout << "Escolha uma op��o:  "; cin >> op ;
		cout<<endl;
		switch(op)
		{
		case 1:
			if (x < 99)
			{
				cin.ignore();
				cout << "Nome do Funcion�rio: "; getline(cin,func[x].nome);
				cout << "Idade do Funcion�rio: "; cin >> func[x].idade;
				cin.ignore();
				cout << "Cargo do Funcion�rio: "; getline(cin,func[x].cargo);
				cout << "Sal�rio do Funcion�rio: "; cin >> func[x].salario;
				x++;
				num_func +=1;
			}
			else 
			{
				cout <<"\nM�MORIA CHEIA\n";
			}
			break;
		case 2:
			for (int i=0; i<x;i++)
			{
				cout << "Nome do Funcion�rio: " << func[i].nome << endl;
				cout << "Idade do Funcion�rio: " << func[i].idade << endl;
				cout << "Cargo do Funcion�rio: " << func[i].cargo << endl;
				cout << "Sal�rio do Funcion�rio: " << func[i].salario << endl;
			}
			break;
		case 3: 
			cin.ignore();
			cout << "\nDigite o Nome do Funcion�rio: "; getline(cin,pesquisa);
			for (int i=0;i<x;i++)
			{
				if (pesquisa == func[i].nome)
				{
					cout << "Idade do Funcion�rio: " << func[i].idade << endl;
				   	cout << "Cargo do Funcion�rio: " << func[i].cargo << endl;
					cout << "Sal�rio do Funcion�rio: " << func[i].salario << endl;
					func_inv = true;
				}
				else 
				{
					func_inv=false;
				}
					
			}
			if (func_inv=false)
			{
				cout << "Funcion�rio n�o Cadastrado!\n";
			}
			break;
		case 4:
			for (int i=0; i < x; i++)
			{
				soma += func[i].salario;
			}
			cout << "A M�dia Salarial De Todos os Funcion�rios � de: " << (soma/num_func);
			break;
		case 5: 
			cout << "Encerrando programa...";
			break;
		default: 
			cout << "OP��O INV�LIDA!!";
			break;
		}
		
	}while(op!=5);
	
	return 0;
}