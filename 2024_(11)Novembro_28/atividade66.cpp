#include <iostream>
#include <locale.h>
#include <fstream>
#include <string>

using namespace std;

struct TTemperatura {
	string data;	
	float temp;
};

void RegistrarTemp () {
	TTemperatura graus;
	cout << "Registrar Temperatura: \n";
	cout << "Digite a Data (XX-XX-XXXX): > ";
	cin >> graus.data;
	cout << "Digite a Temperatura em °C: > ";
	cin >> graus.temp;
	
	ofstream arquivo;
	arquivo.open("temperatura.txt", ios::app);
	if (arquivo.is_open());
		arquivo << graus.data << ";" << graus.temp<<"\n";
		arquivo.close();
	
}

void ExibirTemp() {
	cout << "Lista de Temperaturas: \n";
	ifstream arquivo;
	arquivo.open("temperatura.txt");
	string data, temp;
	if (arquivo.is_open()) 
	{
		while (getline(arquivo,data,';')) 
		{
			if (getline(arquivo,temp)) {
				cout << "Data: " << data << "Temperatura: " << temp << "°C\n";
			}
		}
		arquivo.close();
	}	
}

void MediaTemp(){
	ifstream arquivo("temperatura.txt");
	if(arquivo.is_open()) {
		float soma =0;
		int contagem = 0;
		string data, temp;
		while (getline(arquivo, data,';')) {
			if (getline(arquivo, temp)) {
				soma = soma + stof(temp);
				contagem++;
			}
		}
		arquivo.close();
		if (contagem > 0) {
			float media = soma / contagem;
			cout << "\nMédia das Temperatras: " << media << "°C\n";
		} else {
			cout <<"\nNenhuma temperatura registrada para calcular a média.\n";
		}
	} else {
		cout << "Erro ao abrir o arquivo!\n";
	}
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int op=0;
	do {
		cout << "Menu: \n";
		cout << "1 - Registrar Temperatura\n";
		cout << "2 - Exibir Temperaturas\n";
		cout << "3 - Calcular a Média das Temperaturas\n";
		cout << "4 - Finaliza Programa\n";
	cin >> op;
		switch(op)
		{
		case 1:
			RegistrarTemp();
			break;
		case 2:
			ExibirTemp();
			break;
		case 3:
			MediaTemp();
			break;
		case 4:
			cout << "Finalizando...";
			break;
		default:
			cout << "Opção Inválida";
			break;
		}
		
	}while (op!=4);
	return 0;
}