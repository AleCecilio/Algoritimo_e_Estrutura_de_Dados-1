/*Uma loja utiliza o c�digo V para transa��o � vista e P para transa��o a prazo. 
Fa�a um programa que receba o c�digo e o valor de quinze transa��es, calcule e mostre:
a) o valor total das compras � vista;
b) o valor total das compras a prazo;
c) o valor total das compras efetuadas;
d) o valor da primeira presta��o das compras a prazo juntas, sabendo-se que 
ser�o pagas em tr�s vezes.*/

#include <iostream>  // Biblioteca para entrada e sa�da padr�o
#include <locale.h>  // Biblioteca para configura��o de localidade (idioma)
using namespace std; // Uso do namespace std para simplificar o c�digo

int main() {
    setlocale(LC_ALL, "portuguese"); // Exibe caracteres em portugu�s, incluindo acentos

    char cod;
    float valor, total_vista=0, total_prazo=0, total_compras=0;
    int i=0;
    
    cout<<"=== BEM-VINDOS AO PROGRAMA DE COMPRAS ===";
    cout<<"\n|TABELA DE C�DIGO";
    cout<<"\n|V => � vista";
    cout<<"\n|P => a prazo";
    
    while (i < 15) {
        cout<<"\nDigite o c�digo da " <<i+1<< "� transa��o: "; cin>>cod;
        cout<<"Digite o valor da " <<i+1<< "� transa��o: "; cin>>valor;
        
        if (cod=='V' || cod=='v'){
            total_vista += valor;
            i++;
        } else if (cod=='P' || cod=='p'){
            total_prazo += valor;
            i++;
        } else{
            cout<<"\n\nC�digo inv�lido! Tente novamente.\n";
        }
    }

    total_compras = total_vista + total_prazo;
    float primeira_prestacao = total_prazo / 3;

    // a) Valor total das compras � vista
    cout<<"\nValor total das compras � vista: " <<total_vista;

    // b) Valor total das compras a prazo
    cout<<"\nValor total das compras a prazo: " <<total_prazo;

    // c) Valor total das compras efetuadas
    cout<<"\nValor total das compras efetuadas: " <<total_compras;

    // d) Valor da primeira presta��o das compras a prazo juntas
    cout<<"\nValor da primeira presta��o das compras a prazo: " <<primeira_prestacao<< "\n";

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
