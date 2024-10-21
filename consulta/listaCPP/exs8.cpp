/*Uma loja utiliza o código V para transação à vista e P para transação a prazo. 
Faça um programa que receba o código e o valor de quinze transações, calcule e mostre:
a) o valor total das compras à vista;
b) o valor total das compras a prazo;
c) o valor total das compras efetuadas;
d) o valor da primeira prestação das compras a prazo juntas, sabendo-se que 
serão pagas em três vezes.*/

#include <iostream>  // Biblioteca para entrada e saída padrão
#include <locale.h>  // Biblioteca para configuração de localidade (idioma)
using namespace std; // Uso do namespace std para simplificar o código

int main() {
    setlocale(LC_ALL, "portuguese"); // Exibe caracteres em português, incluindo acentos

    char cod;
    float valor, total_vista=0, total_prazo=0, total_compras=0;
    int i=0;
    
    cout<<"=== BEM-VINDOS AO PROGRAMA DE COMPRAS ===";
    cout<<"\n|TABELA DE CÓDIGO";
    cout<<"\n|V => à vista";
    cout<<"\n|P => a prazo";
    
    while (i < 15) {
        cout<<"\nDigite o código da " <<i+1<< "ª transação: "; cin>>cod;
        cout<<"Digite o valor da " <<i+1<< "ª transação: "; cin>>valor;
        
        if (cod=='V' || cod=='v'){
            total_vista += valor;
            i++;
        } else if (cod=='P' || cod=='p'){
            total_prazo += valor;
            i++;
        } else{
            cout<<"\n\nCódigo inválido! Tente novamente.\n";
        }
    }

    total_compras = total_vista + total_prazo;
    float primeira_prestacao = total_prazo / 3;

    // a) Valor total das compras à vista
    cout<<"\nValor total das compras à vista: " <<total_vista;

    // b) Valor total das compras a prazo
    cout<<"\nValor total das compras a prazo: " <<total_prazo;

    // c) Valor total das compras efetuadas
    cout<<"\nValor total das compras efetuadas: " <<total_compras;

    // d) Valor da primeira prestação das compras a prazo juntas
    cout<<"\nValor da primeira prestação das compras a prazo: " <<primeira_prestacao<< "\n";

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
