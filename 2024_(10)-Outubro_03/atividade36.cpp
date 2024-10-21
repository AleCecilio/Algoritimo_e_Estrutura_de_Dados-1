#include <iostream>
#include <locale>
#include <string>

using namespace std;

string ehPalindromo (string palavra) {
	string invertido, ehp;
	for (int i=palavra.size()-1; i >= 0; i--) {
		invertido += palavra[i];
	}
	if (invertido == palavra){
		ehp = "é um Palíndromo";
	}
	else {
		ehp = "não é um Palíndromo";
		
	}
	return ehp;
}

int main () {
	setlocale(LC_ALL, "portuguese");
	string a;
	cout << "Digite uma Palavra: > ";
	cin >> a;
	cout << "------------------------------------------\n";
	cout << "A Palavra '" << a << "' " << ehPalindromo(a);
	
	return 0;
}