#include <iostream>
#include<locale>
using namespace std;
int main()
{
	int mes;
	cout <<"Informe o numero do mes: ";
	cin >> mes;
	switch(mes)
	{
		case 1:cout<<"JANEIRO";
		
			break;
		
		case 2:cout<<"FEVEREIRO";
		
			break;
		
		case 3:cout<<"MARCO";
		
			break;
		
		case 4:cout<<"ABRIL";
		
			break;
		
		case 5:cout<<"MAIO";
		
			break;
		
		case 6:cout<<"JUNHO";
		
			break;
	
		case 7:cout<<"JULHO";
			
			break;
	
		case 8:cout<<"AGOSTO";
		
			break;
	
		case 9:cout<<"SETEMBRO";
		
		   	break;
	
		case 10:cout<<"OUTUBRO";
		
		   	break;
	
		case 11:cout<<"NOVEMBRO";
		
		   	break;
	
		case 12:cout<<"DEZEMBRO";
		
		   	break;
		
		default: cout<< "Mes inexistente";
	}	
	
	
	
		
	return 0;
}