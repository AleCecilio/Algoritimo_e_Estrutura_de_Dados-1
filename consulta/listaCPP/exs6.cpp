/*Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a 
tabela a seguir, verifique e mostre a classificação da pessoa:
Altura            Peso
    	  	  	  Até 60      Entre 60 e 90     Acima de 90
Menores que 1,20  A           D                 G
De 1,20 a 1,70    B           E                 H
Maiores que 1,70  C           F                 I*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configuração de localidade(idioma)
using namespace std; //Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); //Exiba caracteres em portugues, incluindo acentos
    
    float altura, peso;
    char categoria;
    
    cout<<"===CLASSIFICAÇÃO IDADE-PESO===";
    cout<<"\nInsira a altura (em m): "; cin>>altura; 
    cout<<"\nInsira o peso(em kg): "; cin>>peso; 
    
    if (altura < 1.20) { //altura até 1.20
        if (peso <= 60) {
            categoria = 'A';
        } else if (peso > 60 && peso <= 90) {
            categoria = 'D';
        } else {
            categoria = 'G';
        }
    } else if (altura >= 1.20 && altura <= 1.70) { //altura de 1,20 a 1,70
        if (peso <= 60) {
            categoria = 'B';
        } else if (peso > 60 && peso <= 90) {
            categoria = 'E';
        } else {
            categoria = 'H';
        }
    } else { // altura > 1.70
        if (peso <= 60) {
            categoria = 'C';
        } else if (peso > 60 && peso <= 90) {
            categoria = 'F';
        } else {
            categoria = 'I';
        }
    }
    
    cout<<"\nCategoria: "<<categoria; 
    
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}