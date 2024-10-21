//Escreva um programa que leia valores inteiros do usuário até que seja inserido 
//um valor negativo, e então exiba quantos desses valores são positivos.

#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
    int n, i = 0;

    cout<<"Digite um número inteiro (negativo para parar): "; cin>>n;

    while(n>=0){
        i++;
        cout<<"Digite outro número inteiro (negativo para parar): "; cin>>n;
    }

    cout<<"Você inseriu "<<i<<" números positivos."<<"\n";
    return 0;
}
