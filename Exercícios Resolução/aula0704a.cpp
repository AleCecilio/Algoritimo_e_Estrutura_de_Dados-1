/*
1- Crie um programa que leia um valor entre 5 e 155(CERTIFIQUE-SE que o valor 
está nesse intervalo) ao final informe o dobro.

2- Faça um programa que liste 5 opções e execute a função definida em cada opção.
    Programa Tabajara
    1- Soma de 2 valores
    2- Produto de 2 valores
    3- Diferença entre 2 valores
    4- Divisão entre 2 números(quociente)
    5- Sair
 OBS: Programa somente será encerrado quando o usuário escolher a opção 5.
 
3- Crie um programa que leia a quantidade de alunos de uma turma, leia a idade 
de cada um e ao final imprima a média das idades.
*/
#include <iostream>
using namespace std;

int main()
{
	/*
	int valor=0;
	while(valor<5 || valor >155)
	{
		cout<< "Informe um valor entre 5 e 155: ";
		cin >> valor;
	}
	cout <<"Dobro = "<<(valor*2);	
	*/
    int valor;
    cout<< "Informe um valor entre 5 e 155: ";
    cin >> valor;
	while(valor<5 || valor >155)
	{
		cout<< "Valor inválido. Informe um valor entre 5 e 155: ";
		cin >> valor;
	}
	cout <<"Dobro = "<<(valor*2);	
	return 0;
}









