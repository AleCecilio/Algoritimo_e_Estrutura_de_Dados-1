/*Leia a altura (h) e sexo(s) de uma pessoa, construa um algoritmo que calcule 
seu peso ideal, utilizando as formulas a baixo e imprima o peso ideal:
a. Para homens: (72.7*h) - 58
b. Para mulheres: (62.1*h) - 44.7*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configuração de localidade(idioma)
using namespace std; //Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); //Exiba caracteres em portugues, incluindo acentos

    float h, imc;
    int sexo;

	cout<<"===CALCULADORA DE IMC's===";    
    cout<<"\nInforme a altura: "; cin>>h;
    cout<<"\nInforme o sexo - 1.Feminino ou 2.Masculino: "; cin>>sexo;
    
    switch(sexo){
	case 1:
		imc = (62.1*h) - 44.7;
		cout<<"\nPeso Ideal:" <<imc; 
		break;
	case 2:
		imc = (72.7*h) - 58;
		cout<<"\nPeso Ideal:" <<imc; 
		break;
	default: cout<<"\nOpção inválida!"; break;
	}
    
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}