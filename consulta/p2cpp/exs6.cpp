//Uma loja de brinquedos está realizando um inventário e precisa contar a 
//quantidade de itens em cada seção. Cada seção tem um número fixo de tipos de 
//brinquedos. O gerente quer saber o total de produtos em cada seção.
//Escreva um programa que peça ao usuário a quantidade de tipos de brinquedos 
//em uma seção e, em seguida, o número de unidades de cada tipo. O programa 
//deve calcular e exibir o total de brinquedos nessa seção.

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