/*Uma loja utiliza o c�digo V para transa��o � vista e P para transa��o a prazo. 
Fa�a um programa que receba o c�digo e o valor de quinze transa��es, calcule e mostre:
a) o valor total das compras � vista;
b) o valor total das compras a prazo;
c) o valor total das compras efetuadas;
d) o valor da primeira presta��o das compras a prazo juntas, sabendo-se que 
ser�o pagas em tr�s vezes.*/

#include <iostream>  
#include <locale.h>  
using namespace std; 

int main() {
    setlocale(LC_ALL, "portuguese");

    char cod;
    float valor, total_vista=0, total_prazo=0, total_compras=0, primeira_prestacao;
    int i=0; //para contar o n�mero de transa��es
    
    cout<<"==|BEM-VINDOS AO PROGRAMA DE COMPRAS|==";
    cout<<"\n|TABELA DE C�DIGO";
    cout<<"\n|V => � vista";
    cout<<"\n|P => a prazo";
    
    while (i < 15) {
        cout<<"\nDigite o c�digo da "<<i+1<<"� transa��o: "; cin>>cod;
        cout<<"Digite o valor da "<<i+1<<"� transa��o: "; cin>>valor;
        
        if (cod=='V' || cod=='v'){
            total_vista = total_vista + valor; 	//adiciona o valor da transa��o ao total de compras � vista
            i++; 								//incrementa o contador de transa��es
        } else if (cod=='P' || cod=='p'){
            total_prazo = total_prazo + valor;  //adiciona o valor da transa��o ao total de compras a prazo
            i++;                                //incrementa o contador de transa��es
        } else{
            cout<<"\n\nC�digo inv�lido! Tente novamente.\n";
        }
    }

	//calcula o valor total de todas as compras (� vista e a prazo)
    total_compras = total_vista + total_prazo; 
    
    //calcula o valor da primeira presta��o das compras a prazo em 3 vezes
    primeira_prestacao = total_prazo / 3;

    //a)Valor total das compras � vista
    cout<<"\nValor total das compras � vista: "<<total_vista;

    //b)Valor total das compras a prazo
    cout<<"\nValor total das compras a prazo: "<<total_prazo;

    //c)Valor total das compras efetuadas
    cout<<"\nValor total das compras efetuadas: "<<total_compras;

    //d)Valor da primeira presta��o das compras a prazo juntas
    cout<<"\nValor da primeira presta��o das compras a prazo: "<<primeira_prestacao<< "\n";

    return 0; 
}
