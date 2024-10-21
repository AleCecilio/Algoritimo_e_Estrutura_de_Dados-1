/*Faça um programa que receba o código correspondente ao cargo de um 
funcionário e seu salário atual e mostre o cargo, o valor do aumento e seu novo 
salário. Os cargos estão na tabela a seguir: 
Código - Percentual - Cargo
1 - 50% - Escriturário  
2 - 35% - Secretário 
3 - 20% - Caixa 
4 - 10% - Gerente 
5 - Diretor Não tem aumento*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configuração de localidade(idioma)
using namespace std; //Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); //Exiba caracteres em portugues, incluindo acentos
    
    int cod;
    float sa, ns;
    
    cout<<"===TABELA DE CÓDDIGOS===";
    cout<<"\nCódigo - Cargo";
    cout<<"\n1 - Escriturário";
    cout<<"\n2 - Secretário";
    cout<<"\n3 - Caixa";
    cout<<"\n4 - Gerente";
    cout<<"\n5 - Diretor";
    
    cout<<"\nInsira o código referente ao cargo desejado: "; cin>>cod;
    
    switch(cod){
	case 1: 
		cout<<"Insira o valor do salário atual: "; cin>>sa;
		ns = sa + (50/100);
		cout<<"\nSalario após o aumento: " <<ns<<"\n";
		break;
	case 2: 
		cout<<"Insira o valor do salário atual: "; cin>>sa;
		ns = sa + (35/100);
		cout<<"\nSalario após o aumento: " <<ns<<"\n";
		break;
	case 3:
		cout<<"Insira o valor do salário atual: "; cin>>sa;
		ns = sa + (20/100);
		cout<<"\nSalario após o aumento: " <<ns<<"\n";
		break;
	case 4:
		cout<<"Insira o valor do salário atual: "; cin>>sa;
		ns = sa + (10/100);
		cout<<"\nSalario após o aumento: " <<ns<<"\n";
		break;
	case 5:
		cout<<"Insira o valor do salário atual: "; cin>>sa;
		ns = sa;
		cout<<"\nSalario: " <<ns<<"\n";
		break;
	default:
		break;
	}
    
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}