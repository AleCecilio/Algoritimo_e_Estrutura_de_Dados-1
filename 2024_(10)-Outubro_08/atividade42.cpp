/*
Crie um programa que utilize funções para :
1- Menu de opções(leitura de valores, leitura de operação, 
   resultado)
2- Leitura de valores ( irá ler 2 valores)
3- Leitura de operação (+, - , /, *)
4- Resultado - imprime o resultado.
*/
#include <iostream>
using namespace std;

int menu()
{
  int aux;
  cout <<"MEGA MASTER CALCULATOR TABAJARA"<<endl; 
  cout << "1- Leitura de valores "<<endl;
  cout << "2- Leitura de operação "<<endl;
  cout << "3- Resultado "<<endl;
  cout << "0- Sair "<<endl;
  cout << "Informe sua opção: "; cin>> aux;
  return aux;		
}
void leituraValores(int &val1, int &val2)
{
	cout << "Informe o primeiro valor : "; 
	cin>> val1;
	cout << "Informe o segundo valor : "; 
	cin>> val2;
}
char leituraOperador()
{
	char op;
    cout <<"Escolha seu operador: "<<endl; 
    cout << "+ para soma "<<endl;
    cout << "- para subtração "<<endl;
    cout << "/ para Divisão "<<endl;
    cout << "* para Multiplicação"<<endl;
    cout << "Informe sua opção: "; cin>> op;    
    return op;		
}
void resultado(int val1, int val2, char op)
{
	if(op=='+')
		cout << "Soma= "<< val1 + val2;
	if(op=='-')
		cout << "Diferença= "<<  val1 - val2;
	if(op=='/')
		cout << "Divisão= "<<  val1 / val2;	
	if(op=='*')
		cout << "Produto= "<<  val1 * val2;	
	cout << endl;
}

int main()
{
	int x = menu();
	int num1, num2;
	char op;
	while(x !=0)
	{
		if(x == 1)
          leituraValores(num1, num2);
        if(x == 2)
          op = leituraOperador();
        if(x == 3)
          resultado(num1, num2, op);
        if(x == 0)
        	break;
        x = menu();
	}	
	return 0;
}
