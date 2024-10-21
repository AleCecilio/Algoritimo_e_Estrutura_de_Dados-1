//Escreva um programa que faça uma contagem regressiva de n até 1.
#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int i, n;
	
	cout<<"Contagem regressiva de: "; cin>>n;
	
	cout<<"\n";
	for(i=n; i>=1; i--){
		cout<<i<<"\n";
	}
	
	return 0;
}