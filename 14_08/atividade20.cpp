/*2 - Crie um programa que cadastre estudantes de uma turma e
possibilite a consulta por matrícula, idade, curso, e-mail.
*/

#include <iostream>
#include <locale>

using namespace std;
struct TEstudantes {
	int idade;
	string nome, matricula, curso, email;
};

int main()
{
	setlocale(LC_ALL,"portuguese");
	TEstudantes estudante[4];
	cout << "Cadastro de Estudante\n";
	for (int i=0;i<4;i++)
	{
		cout << "Nome: "; getline(cin,estudante[i].nome);
		cout << "Matrícula: "; cin >> estudante[i].matricula;
		cout << "Idade: "; cin >> estudante[i].idade;
		cin.ignore();
		cout << "Curso: "; getline(cin,estudante[i].curso);
		cout << "E-mail: ";cin >> estudante[i].email;
	}
	cout << endl;
	cout << "Consulta de Estudantes\n";
	string mat;
	cout << "Informe a mtrícula para consulta: "; cin >> mat;
	for (int i=0;i<4;i++)
	{
		if (estudante[i].matricula==mat)
		{
			cout << "Nome: " << estudante[i].nome << endl;
			cout << "Idade: " << estudante[i].idade << endl;
			cout << "Curso: " << estudante[i].curso << endl;
			cout << "E-mail: " << estudante[i].email << endl;
		}
	}
	
	
	return 0;
}