/*Cada espectador de um cinema respondeu a um question�rio no qual constava sua 
idade e sua opini�o em rela��o ao filme: �timo � 3; bom � 2; regular � 
1. Fa�a um programa que receba a idade e a opini�o de quinze espectadores, 
calcule e mostre:
a) a m�dia das idades das pessoas que responderam �timo;
b) a quantidade de pessoas que responderam regular;
c) a percentagem de pessoas que responderam bom, entre todos os espectadores
analisados. */

#include <iostream>  // Biblioteca para entrada e sa�da padr�o
#include <locale.h>  // Biblioteca para configura��o de localidade (idioma)
using namespace std; // Uso do namespace std para simplificar o c�digo

int main() {
    setlocale(LC_ALL, "portuguese"); // Exibe caracteres em portugu�s, incluindo acentos
    
    int idade, op;
    int otimo=0, regular=0, bom=0, ttpessoas=15;
    float somaIdadeOtimo = 0;
    int i=0;
    
    cout<<"=== AVALIA��O AO FILME ===";
    
    while(i<ttpessoas){
        cout<<"\n=> Dados do " <<i+1<< "� espectador:";
        cout<<"\n| Insira sua idade: "; cin>>idade;

        cout<<"\nMENU DE OP��ES";
        cout<<"\n| 3 - �timo";
        cout<<"\n| 2 - bom";
        cout<<"\n| 1 - regular";
        cout<<"\nInsira o c�digo de sua avalia��o: "; 
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
                cout<<"Op��o Inv�lida!!";
                i--; // Decrementa i para repetir a entrada de dados para o mesmo espectador
                break;
        }
        
        i++; // Incrementa o contador para o pr�ximo espectador
    }
    
    // Calcula a m�dia das idades das pessoas que responderam �timo
    float mediaIdadeOtimo = (otimo > 0) ? (somaIdadeOtimo / otimo) : 0;

    // Calcula a porcentagem de pessoas que responderam bom
    float percentBom = (bom / (float)ttpessoas) * 100;
    
    // Exibe os resultados
    cout<<"\nM�dia das idades das pessoas que responderam �timo: " <<mediaIdadeOtimo;
    cout<<"\nQuantidade de pessoas que responderam regular: " <<regular;
    cout<<"\nPercentagem de pessoas que responderam bom: " <<percentBom << "%\n";
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
