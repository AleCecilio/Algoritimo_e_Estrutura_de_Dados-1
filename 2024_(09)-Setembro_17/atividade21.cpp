#include <iostream>
#include <locale>

using namespace std;

struct TAluno {
	string mat, nome;
	float n1, n2, n3;
};

int main()
{
	TAluno alunos[5];
	for(int i=0; i<=4; i++)
	{
		cout << "Matrícula: "; cin>>alunos[i].mat;
		cout << "Nome: "; cin>>alunos[i].nome;
		cout << "Nota Avaliação 1: "; cin>>alunos[i].n1;
		cout << "Nota Avaliação 2: "; cin>>alunos[i].n2;
		cout << "Nota Avaliação 3: "; cin>>alunos[i].n3;
		cout << endl;
	}
	float maiorn1=alunos[0].n1;
	int p=0;
	for (int i=0; i <=4; i++)
	{
		if (alunos[i].n1>maiorn1)
		{
			maiorn1 = alunos[i].n1;
			p=i;
		}
	}
	cout << "Aluno com maior nota1 = " << alunos[p].nome;
	cout <<"\nmaior nota1 = "<< maiorn1;
	float maiorMedia = 0;
	for (int i=0; i <=4; i++)
	{
		if ((alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3 > maiorMedia)
		{
			maiorMedia = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3;
			p=i;
		}
	}
	cout << "Alunos maior média geral = " << alunos[p].nome;
	cout << "\nMaior Média = " << maiorMedia;
	float menorMedia=10;
	for (int i=0; i <=4; i++)
	{
		if ((alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3 < menorMedia)
		{
			maiorMedia = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3;
			p=i;
		}
	}
	cout << "Aluno com menor media = " << alunos[p].nome;
	cout <<"\nmenor média = "<< menorMedia;
	for (int i=0; i <=4; i++)
	{
		if ((alunos[i].n1 + alunos[i].n2 + alunos[i].n3)/3 < 6)
		{
			cout << alunos[i].nome << "- Reprovado\n";
		}
		else 
		{
			cout << alunos[i].nome << "- Aprovado";
		}
	}
	
	return 0;
}