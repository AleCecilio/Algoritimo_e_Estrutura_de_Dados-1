
#include <iostream>
using namespace std;
 
int main()
{
	float v1, v2;
	int opcao;
	
	while(opcao !=5)
	{
	    cout<<"Programa Tabajara"<< endl;
	    cout<<"1- Soma  "<<endl;
	    cout<<"2- Produto "<<endl;
	    cout<<"3- Diferença "<<endl;
	    cout<<"4- Divisão "<<endl;
	    cout<<"5- Sair"<<endl;
		cout<<"Informe a opção desejada: ";
		cin >> opcao;
		while(opcao<1 || opcao>5)
		{
			cout<<"opção é inválida."<<endl;
			cout<<"Informe outra opção: ";
		    cin >> opcao;
		}
		switch(opcao)
		{
		case 1:
			cout<<"Digite o valor1: "; cin >> v1;
			cout<<"Digite o valor2: "; cin >> v2;
			cout<<"Soma = "<<(v1+v2)<<endl;
			break;
		case 2:
			cout<<"Digite o valor1: "; cin >> v1;
			cout<<"Digite o valor2: "; cin >> v2;
			cout<<"Produto = "<<(v1*v2)<<endl;
			break;
		case 3:
			cout<<"Digite o valor1: "; cin >> v1;
			cout<<"Digite o valor2: "; cin >> v2;
			cout<<"Dierença = "<<(v1-v2)<<endl;
			break;
	    case 4:
			cout<<"Digite o valor1: "; cin >> v1;
			cout<<"Digite o valor2: "; cin >> v2;
			cout<<"Divisão = "<<(v1/v2)<<endl;
			break;		
		default:
			cout<<"Encerrando o programa";
			break;
		}	
	}
	return 0;
}