/*Faça um programa que receba a idade de oito pessoas, calcule e mostre
a) A quantidade de pessoas em cada faixa etária;
b) A porcentagem de pessoas na primeira faixa com relação ao total de pessoas;
c) A porcentagem de pessoas na última faixa com relação ao total de pessoas;
Faixa etária Idade
1º. Até 15 anos
2º. De 16 a 30 anos
3º. De 31 a 45 anos
4º. De 46 a 60 anos
5º. Acima de 60 anos*/

#include <iostream>  // Biblioteca para entrada e saída padrão
#include <locale.h>  // Biblioteca para configuração de localidade (idioma)
using namespace std; // Uso do namespace std para simplificar o código

int main() {
    setlocale(LC_ALL, "portuguese"); // Exibe caracteres em português, incluindo acentos
    
    int idades[8];
    int faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;
    
    cout << "=== DESCUBRA A FAIXA ETÁRIA ===\n";
    
    for (int i = 0; i < 8; i++){
        cout<<"Digite a "<< i+1 <<"ª idade: "; cin>>idades[i];
        
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
    
    // a) Quantidade de pessoas em cada faixa etária
    cout<<"\nQuantidade de pessoas em cada faixa etária:";
    cout<<"\n1ª Faixa (Até 15 anos): " <<faixa1;
    cout<<"\n2ª Faixa (De 16 a 30 anos): " <<faixa2;
    cout<<"\n3ª Faixa (De 31 a 45 anos): " <<faixa3;
    cout<<"\n4ª Faixa (De 46 a 60 anos): " <<faixa4;
    cout<<"\n5ª Faixa (Acima de 60 anos): " <<faixa5;

    // b) Porcentagem de pessoas na primeira faixa com relação ao total de pessoas
    float perc_faixa1 = (faixa1 / 8.0) * 100;
    cout<<"\nPorcentagem de pessoas na 1ª faixa: " <<perc_faixa1 <<"%";

    // c) Porcentagem de pessoas na última faixa com relação ao total de pessoas
    float perc_faixa5 = (faixa5 / 8.0) * 100;
    cout<<"\nPorcentagem de pessoas na 5ª faixa: " <<perc_faixa5 <<"%\n";

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
