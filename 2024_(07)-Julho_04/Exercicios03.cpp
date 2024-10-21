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
		cout <<endl<< "Menu de Opções:\n";
		cout << "1.Adicionar Funcionário\n";
		cout << "2.Exibir Todos os Funcionários\n";
		cout << "3.Buscar Funcionário por Nome\n";
		cout << "4.Calcular Média Salarial\n";
		cout << "5.Sair\n" ;
		cout << "Escolha uma opção:  "; cin >> op ;
		cout<<endl;
		switch(op)
		{
		case 1:
			if (x < 99)
			{
				cin.ignore();
				cout << "Nome do Funcionário: "; getline(cin,func[x].nome);
				cout << "Idade do Funcionário: "; cin >> func[x].idade;
				cin.ignore();
				cout << "Cargo do Funcionário: "; getline(cin,func[x].cargo);
				cout << "Salário do Funcionário: "; cin >> func[x].salario;
				x++;
				num_func +=1;
			}
			else 
			{
				cout <<"\nMÉMORIA CHEIA\n";
			}
			break;
		case 2:
			for (int i=0; i<x;i++)
			{
				cout << "Nome do Funcionário: " << func[i].nome << endl;
				cout << "Idade do Funcionário: " << func[i].idade << endl;
				cout << "Cargo do Funcionário: " << func[i].cargo << endl;
				cout << "Salário do Funcionário: " << func[i].salario << endl;
			}
			break;
		case 3: 
			cin.ignore();
			cout << "\nDigite o Nome do Funcionário: "; getline(cin,pesquisa);
			for (int i=0;i<x;i++)
			{
				if (pesquisa == func[i].nome)
				{
					cout << "Idade do Funcionário: " << func[i].idade << endl;
				   	cout << "Cargo do Funcionário: " << func[i].cargo << endl;
					cout << "Salário do Funcionário: " << func[i].salario << endl;
					func_inv = true;
				}
				else 
				{
					func_inv=false;
				}
					
			}
			if (func_inv=false)
			{
				cout << "Funcionário não Cadastrado!\n";
			}
			break;
		case 4:
			for (int i=0; i < x; i++)
			{
				soma += func[i].salario;
			}
			cout << "A Média Salarial De Todos os Funcionários é de: " << (soma/num_func);
			break;
		case 5: 
			cout << "Encerrando programa...";
			break;
		default: 
			cout << "OPÇÃO INVÁLIDA!!";
			break;
		}
		
	}while(op!=5);
	
	return 0;
}