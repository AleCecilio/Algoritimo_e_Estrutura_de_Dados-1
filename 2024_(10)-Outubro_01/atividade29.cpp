/*
Crie um calculadora com as fun��es soma, subtra��o, multipica��o 
e divis�o.
*/
#include <iostream>
using namespace std;

double soma(double x, double y);
double subtracao(double x, double y);
double multiplicacao(double x, double y);
double divisao(double x, double y);

int main()
{
	double a,b;
	cout<< "Informe o primeiro valor: ";
	cin>>a;
	cout<< "Informe o segundo valor: ";
	cin>>b;	
	cout<< "Soma= "<<soma(a,b);
	cout<< "Subtra��o= "<<subtracao(a,b);
	cout<< "Multiplica��o= "<<multiplicacao(a,b);
	cout<< "Divis�o= "<<divisao(a,b);	
	return 0;
}
double soma(double x, double y){
	return x+y;
}
double subtracao(double x, double y){
	return x-y;
}
double multiplicacao(double x, double y){
	return x*y;
}
double divisao(double x, double y){
	if(y!=0)
	  return x/y;
    else
	   return 0;
}