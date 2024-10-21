/*Cada espectador de um cinema respondeu a um questionário no qual constava sua 
idade e sua opinião em relação ao filme: ótimo — 3; bom — 2; regular — 
1. Faça um programa que receba a idade e a opinião de quinze espectadores, 
calcule e mostre:
a) a média das idades das pessoas que responderam ótimo;
b) a quantidade de pessoas que responderam regular;
c) a percentagem de pessoas que responderam bom, entre todos os espectadores
analisados. */

#include <iostream>  // Biblioteca para entrada e saída padrão
#include <locale.h>  // Biblioteca para configuração de localidade (idioma)
using namespace std; // Uso do namespace std para simplificar o código

int main() {
    setlocale(LC_ALL, "portuguese"); // Exibe caracteres em português, incluindo acentos
    
    int idade, op;
    int otimo=0, regular=0, bom=0, ttpessoas=15;
    float somaIdadeOtimo = 0;
    int i=0;
    
    cout<<"=== AVALIAÇÃO AO FILME ===";
    
    while(i<ttpessoas){
        cout<<"\n=> Dados do " <<i+1<< "º espectador:";
        cout<<"\n| Insira sua idade: "; cin>>idade;

        cout<<"\nMENU DE OPÇÕES";
        cout<<"\n| 3 - ótimo";
        cout<<"\n| 2 - bom";
        cout<<"\n| 1 - regular";
        cout<<"\nInsira o código de sua avaliação: "; 
        cin>>op;
        
        switch(op){
            case 3:
                somaIdadeOtimo += idade;
                otimo++;
                break;
            case 2:
                bom++;
                break;
            case 1:
                regular++;
                break;
            default:
                cout<<"Opção Inválida!!";
                i--; // Decrementa i para repetir a entrada de dados para o mesmo espectador
                break;
        }
        
        i++; // Incrementa o contador para o próximo espectador
    }
    
    // Calcula a média das idades das pessoas que responderam ótimo
    float mediaIdadeOtimo = (otimo > 0) ? (somaIdadeOtimo / otimo) : 0;

    // Calcula a porcentagem de pessoas que responderam bom
    float percentBom = (bom / (float)ttpessoas) * 100;
    
    // Exibe os resultados
    cout<<"\nMédia das idades das pessoas que responderam ótimo: " <<mediaIdadeOtimo;
    cout<<"\nQuantidade de pessoas que responderam regular: " <<regular;
    cout<<"\nPercentagem de pessoas que responderam bom: " <<percentBom << "%\n";
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
