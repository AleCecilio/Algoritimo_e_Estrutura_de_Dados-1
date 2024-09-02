#include <iostream>

using namespace std;

struct TEndereco {
		string bairro, rua;
		int num ;	
};

struct TNotas {
	   float nota1, nota2, med_notas;	
};

struct TAluno {
		string nome;
		int idade;
		TEndereco endereco;
		TNotas notas;
};

int main()
{
	
	setlocale(LC_ALL,"portuguese");
	TAluno aluno;
	cout << "Digite as Informações do Aluno " << endl;
	cout << "Nome: "; getline(cin,aluno.nome);
	cout << "Idade: "; cin >> aluno.idade;
	cin.ignore();
	cout << "Bairro: "; getline(cin,aluno.endereco.bairro);
	cout << "Rua: "; getline(cin,aluno.endereco.rua);
	cout << "Número: "; cin >> aluno.endereco.num;
	cout << "Nota 1: "; cin >> aluno.notas.nota1;
	cout << "Nota 2: "; cin >> aluno.notas.nota2;
	aluno.notas.med_notas = (aluno.notas.nota1 + aluno.notas.nota2)/2;
	
	cout << "\n---------------------------\n";
	cout << "Informações do Aluno " << endl;
	cout << "Nome: " << aluno.nome << endl;
	cout << "Idade: " << aluno.idade << endl;
	cout << "Bairro: " << aluno.endereco.bairro << endl;
	cout << "Rua: " << aluno.endereco.rua << endl;
	cout << "Número: " << aluno.endereco.num << endl;
	cout << "Nota 1: " << aluno.notas.nota1 << endl;
	cout << "Nota 2: " << aluno.notas.nota2 << endl;
	cout << "Média das Notas: " << aluno.notas.med_notas;
	
	
	return 0;
}
	