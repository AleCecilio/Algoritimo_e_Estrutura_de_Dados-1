#include <iostream>

using namespace std;
#include <stdlib.h>

int main()
{
	setlocale (LC_ALL,"portuguese");
	char op;
	float val1, val2;
	int menu;
	do 
	{
		//cout << "Valor 1 "; 
		//cin >> val1;
		//cout << "Operação (+ - * / % C) ";
		//cin >>op;
		//cout << "Valor 2 ";
		//cin >>val2;
		
		cout << "calculadora Tabajada\n";
		cin >> val1 >>op >>val2;
		
		switch(op)
		{
		case '+':
			cout << " = "<<(val1 + val2)<<endl;
			break;
		case '-':
			cout << " = "<<(val1 - val2)<<endl;
			break;
		case '*':
			cout << " = "<<(val1 * val2)<<endl;
			break;
		case '/':
			if (val2==0)
				cout << "Erro divisão por 0\n";
			else
				cout << " = "<<(val1 / val2)<<endl;
			break;
		case '%':
			cout << " = "<<((val1*val2)/100)<<endl;
			break;
		
		}
		
		cout << "Opção\n 1 - Nova Operação\ 2 - Limpar\n 0 - Sair\n";
		cin >> menu;
		cout << endl;	
		if (menu ==2)
			system("cls");	
	}while(menu !=0);
	
	
	
	
	
	return 0;
}