#include <iostream>
#include <locale>
/*#include <string>*/

using namespace std;


/* 
string MinutosParaHoras (int minutos) {
    int horas, minutosRestantes;
	string tempoTotal; 
	horas = minutos / 60;
	minutosRestantes = minutos % 60;
	tempoTotal = to_string(horas) + "h" + (minutosRestantes < 10 ? "0" : "") + to_string(minutosRestantes);
	return tempoTotal;	
}
*/

void MinutosParaHoras (int minutos) {
	int horas, minutosRestantes;
	horas = minutos / 60;
	minutosRestantes = minutos % 60;
	cout << horas << " horas e " << minutosRestantes << " minutos";
}


int main()
{
	setlocale(LC_ALL,"portuguese");
	int min;
	cout << "Digite o Tempo em Minutos: > ";
	cin >> min;
	cout <<endl;
	cout << min << " minutos equivalem a "; MinutosParaHoras(min);
	cout << endl;
	cout << endl;
	
	return 0;
}