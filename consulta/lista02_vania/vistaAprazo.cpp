/*Uma loja utiliza o código V para transação à vista e P para transação a prazo. 
Faça um programa que receba o código e o valor de quinze transações, calcule e mostre:
a) o valor total das compras à vista;
b) o valor total das compras a prazo;
c) o valor total das compras efetuadas;
d) o valor da primeira prestação das compras a prazo juntas, sabendo-se que 
serão pagas em três vezes.*/

#include <iostream>  
#include <locale.h>  
using namespace std; 

int main() {
    setlocale(LC_ALL, "portuguese");

    char cod;
    float valor, total_vista=0, total_prazo=0, total_compras=0, primeira_prestacao;
    int i=0; //para contar o número de transações
    
    cout<<"==|BEM-VINDOS AO PROGRAMA DE COMPRAS|==";
    cout<<"\n|TABELA DE CÓDIGO";
    cout<<"\n|V => à vista";
    cout<<"\n|P => a prazo";
    
    while (i < 15) {
        cout<<"\nDigite o código da "<<i+1<<"ª transação: "; cin>>cod;
        cout<<"Digite o valor da "<<i+1<<"ª transação: "; cin>>valor;
        
        if (cod=='V' || cod=='v'){
            total_vista = total_vista + valor; 	//adiciona o valor da transação ao total de compras à vista
            i++; 								//incrementa o contador de transações
        } else if (cod=='P' || cod=='p'){
            total_prazo = total_prazo + valor;  //adiciona o valor da transação ao total de compras a prazo
            i++;                                //incrementa o contador de transações
        } else{
            cout<<"\n\nCódigo inválido! Tente novamente.\n";
        }
    }

	//calcula o valor total de todas as compras (à vista e a prazo)
    total_compras = total_vista + total_prazo; 
    
    //calcula o valor da primeira prestação das compras a prazo em 3 vezes
    primeira_prestacao = total_prazo / 3;

    //a)Valor total das compras à vista
    cout<<"\nValor total das compras à vista: "<<total_vista;

    //b)Valor total das compras a prazo
    cout<<"\nValor total das compras a prazo: "<<total_prazo;

    //c)Valor total das compras efetuadas
    cout<<"\nValor total das compras efetuadas: "<<total_compras;

    //d)Valor da primeira prestação das compras a prazo juntas
    cout<<"\nValor da primeira prestação das compras a prazo: "<<primeira_prestacao<< "\n";

    return 0; 
}
