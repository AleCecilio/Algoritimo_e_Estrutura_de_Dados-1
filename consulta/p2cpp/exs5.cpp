//Escreva um programa que leia valores inteiros do usu�rio at� que seja inserido 
//um valor negativo, e ent�o exiba quantos desses valores s�o positivos.

#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
    int n, i = 0;

    cout<<"Digite um n�mero inteiro (negativo para parar): "; cin>>n;

    while(n>=0){
        i++;
        cout<<"Digite outro n�mero inteiro (negativo para parar): "; cin>>n;
    }

    cout<<"Voc� inseriu "<<i<<" n�meros positivos."<<"\n";
    return 0;
}
