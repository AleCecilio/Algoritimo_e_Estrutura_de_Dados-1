#include <iostream>
#include<locale>
using namespace std;

int main(){
	float salario,taxadeaumento,x,y,salfinal,expr;
	int valores, opc;
	
	cout << "1 CALCULO DO SALARIO FINAL: " << endl;
	cout << "2 EXPRESSAO NUMERICA: "<< endl;
	cout << "3 VALIDA DADO: "<<endl;
	cout << "DIGITE A OPCAO: "; cin>>opc;
	
	switch(opc){
		case 1: 
			cout<<"INFORME O SALARIO ATUAL: ";cin>>salario;
			cout<<"INFORME A TAXA DE AUMENTO: ";cin>>taxadeaumento;
			salfinal = (salario*(1+taxadeaumento/100)) *0.74;
			cout << "VALOR NOVO DO SALARIO = R$ "<<salfinal;			
			break;
		
		case 2: 
			cout<<"INFORME O VALOR DE X: ";cin>>x;
			cout<<"INFORME O VALOR DE Y: ";cin>>y;
			expr = 3*x + y/5;
			cout<<"VALOR DA EXPRESSAO = " <<expr;
			break;
		case 3: break;
		
		default: cout <<"OPCAO INVALIDA!"; break;
	}
		
	
	return 0;
}