#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string texto;
	fstream arquivo("dados.dat", ios::in | ios::out);
	while(!arquivo.eof())
	{
		getline(arquivo, texto);
		//arquivo >> texto;
		cout << texto <<endl;
	}
	arquivo.close();
	
	fstream arquivo2("dados.dat", ios::out |ios::app);
	arquivo2<<"Epitafio Pessoa;18;SI\n";
	arquivo2.close();
	return 0;
}