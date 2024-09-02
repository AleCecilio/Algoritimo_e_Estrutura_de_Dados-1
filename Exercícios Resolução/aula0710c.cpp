/*
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
#include <stdlib.h>
using namespace std;
int main()
{
	int fulano=0, beltrano=0, ciclano=0, nulo=0, branco=0;
	int voto=0;
	char op='S';
	while(toupper(op)=='S')
	{
     cout<<"Enquete\n";
     cout<<"1- Fulano de Tal\n";
     cout<<"2- Ciclano\n";
     cout<<"3- Beltrano\n";
     cout<<"4- Nulo\n";
     cout<<"5- Branco\n";
     cout<<"Informe sua opção:"; cin >> voto;	
	 cout<<"Deseja fazer nova leitura?(S/N): "; cin >> op;	
	 switch(voto)
	 {
	 	case 1: fulano +=1; // fulano = fulano +1 ou fulano++	 		
	 	break;
	 	case 2: beltrano +=1;  		
	 	break;	 
	 	case 3: ciclano +=1; 	 		
	 	break;
	 	case 4: nulo +=1;  		
	 	break;
	 	case 5: branco +=1; 	 		
	 	break;	 
	   default:
	 	cout<<"Opção inválida!!\n";	 
 	 }//fecha o switch
 	 system("cls");
	}//fecha while
	cout<<"Resultado\n";
	int total = (fulano+beltrano+ciclano+nulo+branco);
	cout<<"1- Fulano de Tal"<<(fulano*100/total)<<"%\n";
    cout<<"2- Ciclano"<<(ciclano*100/total)<<"%\n";
    cout<<"3- Beltrano"<<(beltrano*100/total)<<"%\n";
    cout<<"4- Nulo"<<(nulo*100/total)<<"%\n";
    cout<<"5- Branco"<<(branco*100/total)<<"%\n";
	return 0;	
}