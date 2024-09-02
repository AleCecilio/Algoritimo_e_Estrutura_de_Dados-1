/* 
1- Crie um programa que leia uma quantidade indefinida de números e ao final 
imprima a soma. O programa irá ler os números até que o usuário digite o valor 0.

2- TecTech precisa fazer uma enquete verificando a intenção de votos de um 
determinado grupo de eleitores. Ajude-a criando um programa que liste as opções
de candidatos, lê as intenções de votos e no final informe a % de votos de cada 
candidato, % de nulos e brancos.Exemplo:
Enquete
1- Fulano de Tal
2- Ciclano
3- Beltrano
4- Nulo
5- Branco
Informe sua opção:
*/
#include <iostream>
using namespace std;
int main()
{
	int val, soma=0;
	while(val !=0)
	{
	   cout<<"Informe um valor: "; cin >> val;
	   soma += val;	
	}
	cout<<"Soma= "<< soma;
	return 0;	
}