#include <iostream>

using namespace std;

int main ()
{
	setlocale (LC_ALL,"portuguese");
	int num;
	cout << "Qual o n�mero de alunos da turma A? ";
	cin >> num;
	float notas, soma=0;
	for (int i=1; i<=num;i++)
	{
		cout << "notas: ";
		cin >> notas;
		soma += notas;
	}
	cout << "M�dia= "<<(soma/num);
	return 0;
}