/*Fa�a um programa que receba o c�digo correspondente ao cargo de um 
funcion�rio e seu sal�rio atual e mostre o cargo, o valor do aumento e seu novo 
sal�rio. Os cargos est�o na tabela a seguir: 
C�digo - Percentual - Cargo
1 - 50% - Escritur�rio  
2 - 35% - Secret�rio 
3 - 20% - Caixa 
4 - 10% - Gerente 
5 - Diretor N�o tem aumento*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configura��o de localidade(idioma)
using namespace std; //Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); //Exiba caracteres em portugues, incluindo acentos
    
    int cod;
    float sa, ns;
    
    cout<<"===TABELA DE C�DDIGOS===";
    cout<<"\nC�digo - Cargo";
    cout<<"\n1 - Escritur�rio";
    cout<<"\n2 - Secret�rio";
    cout<<"\n3 - Caixa";
    cout<<"\n4 - Gerente";
    cout<<"\n5 - Diretor";
    
    cout<<"\nInsira o c�digo referente ao cargo desejado: "; cin>>cod;
    
    switch(cod){
	case 1: 
		cout<<"Insira o valor do sal�rio atual: "; cin>>sa;
		ns = sa + (50/100);
		cout<<"\nSalario ap�s o aumento: " <<ns<<"\n";
		break;
	case 2: 
		cout<<"Insira o valor do sal�rio atual: "; cin>>sa;
		ns = sa + (35/100);
		cout<<"\nSalario ap�s o aumento: " <<ns<<"\n";
		break;
	case 3:
		cout<<"Insira o valor do sal�rio atual: "; cin>>sa;
		ns = sa + (20/100);
		cout<<"\nSalario ap�s o aumento: " <<ns<<"\n";
		break;
	case 4:
		cout<<"Insira o valor do sal�rio atual: "; cin>>sa;
		ns = sa + (10/100);
		cout<<"\nSalario ap�s o aumento: " <<ns<<"\n";
		break;
	case 5:
		cout<<"Insira o valor do sal�rio atual: "; cin>>sa;
		ns = sa;
		cout<<"\nSalario: " <<ns<<"\n";
		break;
	default:
		break;
	}
    
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}