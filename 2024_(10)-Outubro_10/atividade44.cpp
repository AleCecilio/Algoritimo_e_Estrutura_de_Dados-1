#include <iostream>
#include <locale>
#include <string>

using namespace std;


int conta (string texto, char letra){
	int contador=0;
	for (int i=0; i < texto.size(); i++){
		if (texto[i] == letra) {
			contador++;
		}
	}
	return contador;
}


int main()
{
	setlocale(LC_ALL, "portuguese");
	string txt;
	char letra;
	cout << "Escreva o texto: > "; 
	cin.ignore();
	getline(cin,txt);
	cout << endl;
	cout << "Escreva o caractere: > ";
	cin >> letra;
	cout << endl;
	cout << "Nesse texto a " << conta(txt,letra) << " caracteres '" << letra << "'";
	return 0;	
}