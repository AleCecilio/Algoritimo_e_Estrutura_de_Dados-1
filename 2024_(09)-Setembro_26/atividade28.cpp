#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	char quest_alunos[5][10];
	char gab[10]={'a','b','d','a','c','b','b','a','d','c'};
	int notas[5]={0,0,0,0,0};
	for (int lin=0;lin<5;lin++)
	{
		cout << "Aluno "<<lin+1<<": \n";
		for (int col=0;col<10;col++)
		{
			cout << "Questão "<<col+1<<": ";
			cin >> quest_alunos[lin][col];
			quest_alunos[lin][col] = tolower(quest_alunos[lin][col]);
			while  (quest_alunos[lin][col ]!= 'a' && 
					quest_alunos[lin][col ]!= 'b' && 
					quest_alunos[lin][col ]!= 'c' && 
					quest_alunos[lin][col ]!= 'd')
			{
				cout << "Opção inválida! Digite Novamente: ";
				cin >> quest_alunos[lin][col];
				quest_alunos[lin][col] = tolower(quest_alunos[lin][col]);
			}
		}
		cout << "------------------------\n";
	}
	for (int lin=0;lin<5;lin++)
	{
		for (int col=0;col<10;col++)
		{
			if (quest_alunos[lin][col]==gab[col])
			{
				notas[lin]++;
			}
		}
		cout << "O Aluno "<<lin+1<<" tirou "<<notas[lin]<<" pontos\n";
	}

	return 0;
}