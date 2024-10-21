//Um motorista de ônibus precisa monitorar o combustível enquanto dirige. 
//Ele quer saber quantos quilômetros ainda pode percorrer com o combustível
//restante, e deve parar para reabastecer se a quantidade de combustível 
//estiver baixa.
//Escreva um programa que pergunte ao motorista a quantidade inicial de 
//combustível e o consumo médio do ônibus por quilômetro. O programa deve 
//continuar perguntando quantos quilômetros foram percorridos após cada trecho 
//da viagem e subtrair a quantidade correspondente de combustível até que o 
//combustível esteja baixo. O programa deve avisar quando for necessário 
//reabastecer.

#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float qtInicial, consumoMed, percorridos;
	
	cout<<"Insira a quantidade inicial de combustível(em litros): "; cin>>qtInicial;
	cout<<"Insira o consumo médio de combustível(litros por km): "; cin>>consumoMed;
	
	while(qtInicial > 0) {
        cout<<"Km percorridos: "; cin>>percorridos;

        qtInicial = qtInicial + (-percorridos * consumoMed);

        if(qtInicial > 0) {
            cout<<"Combustível restante: "<<qtInicial<<" litros."<<"\n";
        }else{
            cout<<"Atenção! Você precisa reabastecer!"<< "\n";
        }
    }
	
	return 0;
}