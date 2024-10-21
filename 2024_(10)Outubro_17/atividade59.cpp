#include <iostream>
#include <locale>

using namespace std;

void Inverter (string x) {
	if (x.length() == 1) {
		cout << x;
	} else {
		cout << x[x.length()-1];
		Inverter(x.substr(0,x.length()-1));
	}
}

int main () {
	setlocale(LC_ALL,"portuguese");
	string palavra;
	
	cout << "Digite uma Palavra: ";
	cin >> palavra;
	
	cout << endl; 
	
	Inverter(palavra);
	return 0;
}