#include <iostream>
#include <locale>

using namespace std;

bool ehPrimo(int num) 
{
	if (num < 1) return false;
	else 
	{

    	for(int n = 2; n<num-1; n++){
        	if(num%n==0) return false;
		}
    return true;
	}
}

int main() {
	setlocale (LC_ALL,"portuguese");
	int val;
	
	cout << "DIGITE O N�MERO > ";
	cin >> val;
	
	if (ehPrimo(val))
		cout << "Valor � Primo";
	else 
		cout << "Valor n�o � primo";
	return 0;
}