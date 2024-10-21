//Um motorista de �nibus precisa monitorar o combust�vel enquanto dirige. 
//Ele quer saber quantos quil�metros ainda pode percorrer com o combust�vel
//restante, e deve parar para reabastecer se a quantidade de combust�vel 
//estiver baixa.
//Escreva um programa que pergunte ao motorista a quantidade inicial de 
//combust�vel e o consumo m�dio do �nibus por quil�metro. O programa deve 
//continuar perguntando quantos quil�metros foram percorridos ap�s cada trecho 
//da viagem e subtrair a quantidade correspondente de combust�vel at� que o 
//combust�vel esteja baixo. O programa deve avisar quando for necess�rio 
//reabastecer.

#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float qtInicial, consumoMed, percorridos;
	
	cout<<"Insira a quantidade inicial de combust�vel(em litros): "; cin>>qtInicial;
	cout<<"Insira o consumo m�dio de combust�vel(litros por km): "; cin>>consumoMed;
	
	while(qtInicial > 0) {
        cout<<"Km percorridos: "; cin>>percorridos;

        qtInicial = qtInicial + (-percorridos * consumoMed);

        if(qtInicial > 0) {
            cout<<"Combust�vel restante: "<<qtInicial<<" litros."<<"\n";
        }else{
            cout<<"Aten��o! Voc� precisa reabastecer!"<< "\n";
        }
    }
	
	return 0;
}