#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
    int op;
    float n1, n2;
    cout << "Digite o 1 valor: "; 
	cin >> n1;
	cout << "Digite o 2 valor: ";
	cin >> n2;
    cout << "Escolha uma op��o: " <<endl;
    cout << "1- Soma de 2 valores"<<endl;
    cout << "2- Produto de 2 valores"<<endl;
    cout << "3- Diferen�a entre 2 valores"<<endl;
    cout << "4- Divis�o entre 2 n�meros (quocientes)"<<endl;
    cout << "5- Sair"<<endl;
    cout << "Digite a op��o desejada: ";
	cin >> op;
    while (op<1 || op>5) 
	{
		cout<<"Digite uma op��o valida: ";
	    cin >> op;
	}
	if (op==1)
	{
		cout << "Resultado: "<< (n1+n2);
	}
	else 
	{
		if (op==2)
		{
			cout << "Resultado: "<< (n1*n2);
		}
		else 
		{
			if (op==3)
			{
				cout << "Resultado: "<<  (n1-n2);
			}
			else 
			{
				if (op==4)
				{
					cout << "Resultado: "<<  (n1/n2);
				}
				else
				{
				{
					if (op==5)
						cout << "Encerrando programa...";
				}
				}
			}
		}
	}
	
	
    
    
    
    
    
    
    
    return 0;
}