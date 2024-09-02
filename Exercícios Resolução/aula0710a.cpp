/*
3- Crie um programa que leia a quantidade de alunos de uma turma, leia a idade 
de cada um e ao final imprima a média das idades.
*/ 
#include <iostream>
using namespace std;

int main()
{
	int quant, idade;
	cout<<"Informe a quantidade de alunos: "; cin >> quant;
	int contador=1, soma=0;
	while(contador <=quant)
	{
		cout<<"Digite a idade do aluno"<<contador<<": ";
		cin >> idade;
		soma = soma+idade;
		contador += 1;//contador = contador+1 ou contador++;		
	}
	cout<<"Média das idades= "<<(soma/quant);
	return 0;	
}