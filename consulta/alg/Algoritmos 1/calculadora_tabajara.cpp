#include <iostream>
#include<locale>
using namespace std;

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float n1,n2;
	int calculo;
	
	cout << "Digite o primeiro valor: "; cin >> n1;
	cout << "Digite o segundo valor: "; cin >> n2;
	
	cout <<"CALCULO"<<endl;
	cout <<"ESCOLHA A OPERAÇÃO DESEJADA:"<<endl;
	cout <<"1- SOMA" << endl;
	cout <<"2- SUBTRAÇÃO"<< endl;
	cout <<"3- MULTIPLICAÇÃO"<< endl;
	cout <<"4- DIVISÃO"<< endl; cin>> calculo;
	
	switch(calculo){
		case 1: calculo = (n1 + n2); break;
		case 2: calculo = (n1 - n2); break;
		case 3: calculo = (n1*n2); break;
		case 4: calculo = (n1/n2); break;
		default: cout <<"Operação inexistente"; break;	
	}
	cout << calculo;
	return 0;
}