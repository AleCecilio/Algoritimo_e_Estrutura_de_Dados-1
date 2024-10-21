//Uma loja de brinquedos est� realizando um invent�rio e precisa contar a 
//quantidade de itens em cada se��o. Cada se��o tem um n�mero fixo de tipos de 
//brinquedos. O gerente quer saber o total de produtos em cada se��o.
//Escreva um programa que pe�a ao usu�rio a quantidade de tipos de brinquedos 
//em uma se��o e, em seguida, o n�mero de unidades de cada tipo. O programa 
//deve calcular e exibir o total de brinquedos nessa se��o.

#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	//tipos de brinquetos / quantidade de brinquedos em cada tipo / soma do total de brinquedos
	int tipos, quantidade, total = 0;

    cout<<"QUANTOS TIPOS DE BRINQUEDOS? "; cin>>tipos;

    for(int i=1; i<=tipos; i++){
        cout<<"Quantos brinquedos possui o tipo "<<i<<": "; cin>>quantidade;
        total += quantidade;
    }

    cout << "TOTAL DE BRINQUEDOS: "<<total<<"\n";
	
	return 0;
}