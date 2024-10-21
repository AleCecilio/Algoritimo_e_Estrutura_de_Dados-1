/*Fa�a um programa que receba a idade de oito pessoas, calcule e mostre
a) A quantidade de pessoas em cada faixa et�ria;
b) A porcentagem de pessoas na primeira faixa com rela��o ao total de pessoas;
c) A porcentagem de pessoas na �ltima faixa com rela��o ao total de pessoas;
Faixa et�ria Idade
1�. At� 15 anos
2�. De 16 a 30 anos
3�. De 31 a 45 anos
4�. De 46 a 60 anos
5�. Acima de 60 anos*/

#include <iostream>  // Biblioteca para entrada e sa�da padr�o
#include <locale.h>  // Biblioteca para configura��o de localidade (idioma)
using namespace std; // Uso do namespace std para simplificar o c�digo

int main() {
    setlocale(LC_ALL, "portuguese"); // Exibe caracteres em portugu�s, incluindo acentos
    
    int idades[8];
    int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;
    
    cout << "=== DESCUBRA A FAIXA ET�RIA ===\n";
    
    for (int i = 0; i < 8; i++){
        cout<<"Digite a "<< i+1 <<"� idade: "; cin>>idades[i];
        
        if (idades[i] <= 15){
            faixa1++;
        }else if (idades[i] <= 30){
            faixa2++;
        }else if (idades[i] <= 45){
            faixa3++;
        }else if (idades[i] <= 60){
            faixa4++;
        }else{
            faixa5++;
        }
    }
    
    // a) Quantidade de pessoas em cada faixa et�ria
    cout<<"\nQuantidade de pessoas em cada faixa et�ria:";
    cout<<"\n1� Faixa (At� 15 anos): " <<faixa1;
    cout<<"\n2� Faixa (De 16 a 30 anos): " <<faixa2;
    cout<<"\n3� Faixa (De 31 a 45 anos): " <<faixa3;
    cout<<"\n4� Faixa (De 46 a 60 anos): " <<faixa4;
    cout<<"\n5� Faixa (Acima de 60 anos): " <<faixa5;

    // b) Porcentagem de pessoas na primeira faixa com rela��o ao total de pessoas
    float perc_faixa1 = (faixa1 / 8.0) * 100;
    cout<<"\nPorcentagem de pessoas na 1� faixa: " <<perc_faixa1 <<"%";

    // c) Porcentagem de pessoas na �ltima faixa com rela��o ao total de pessoas
    float perc_faixa5 = (faixa5 / 8.0) * 100;
    cout<<"\nPorcentagem de pessoas na 5� faixa: " <<perc_faixa5 <<"%\n";

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
