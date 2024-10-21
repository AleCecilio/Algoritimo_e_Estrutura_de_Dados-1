#include <iostream>
#include <locale>
#include <string>

using namespace std;

int NumeroDeVogais (string x) {
	int numVogais=0;
	for (int i=0; i < x.size(); i++){
		char y = tolower(x[i]);
		cout << "Verificando o caractere: " << y << endl; 
		if (y == 'a' || y == 'e' || y == 'i' || y == 'o' || y == 'u'){
			numVogais +=1;
		}
	}
	return numVogais;
}



int main () {
	setlocale(LC_ALL, "pt_BR.UTF-8");
	string palavra;
	cout << "Digite uma palavra: > ";
	cin >> palavra;
	cout << "------------------------------\n";
	cout << "A Palavra '" << palavra << "' tem " << NumeroDeVogais(palavra) << " Vogais";;
	return 0; 
}