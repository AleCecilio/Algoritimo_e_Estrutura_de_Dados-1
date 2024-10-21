/*Cada espectador de um cinema respondeu a um questionário no qual constava sua 
idade e sua opinião em relação ao filme: ótimo — 3; bom — 2; regular — 
1. Faça um programa que receba a idade e a opinião de 15 espectadores, calcule e mostre:
a) a média das idades das pessoas que responderam ótimo;
b) a quantidade de pessoas que responderam regular;
c) a percentagem de pessoas que responderam bom, entre todos os espectadores
analisados. */

#include <iostream> 
#include <locale.h>  
using namespace std; 

int main() {
    setlocale(LC_ALL, "portuguese"); 
    
    int idade, op;
    int otimo=0, regular=0, bom=0, ttpessoas=15;
    float somaIdadeOtimo = 0, mediaIdadeOtimo, percentBom;
    int i=0;
    
    cout<<"=== AVALIAÇÃO AO FILME ===";
    
    while(i<ttpessoas){
        cout<<"\n=> Dados do " <<i+1<< "º espectador:";
        cout<<"\n| Insira sua idade: "; cin>>idade;

        cout<<"\n|MENU DE OPÇÕES";
        cout<<"\n| 3 - ótimo";
        cout<<"\n| 2 - bom";
        cout<<"\n| 1 - regular";
        cout<<"\nInsira o código de sua avaliação: "; cin>>op;
        
        switch(op){
            case 3: 
				somaIdadeOtimo = somaIdadeOtimo + idade;
                otimo++;
                break;
            
            case 2: bom++; break;
            
            case 1: regular++; break;
            
            default: cout<<"Opção Inválida!!";
                i--; //decrementa i para repetir a entrada de dados para o mesmo espectador
                break;
        }
        
        i++; //incrementa o contador para o próximo espectador
    }
    
    if(otimo>0){
	    mediaIdadeOtimo = somaIdadeOtimo / otimo; //calcula a média das idades se houver pelo menos uma pessoa que avaliou como "ótimo"
	} else {
	    mediaIdadeOtimo=0;                      //sefine a média como 0 se não houver avaliações como "ótimo"
	}

    //calcula a porcentagem de pessoas que responderam bom
    percentBom = (bom / ttpessoas) * 100;
    
    //exibe os resultados
    cout<<"\nMédia das idades das pessoas que responderam ótimo: " <<mediaIdadeOtimo;
    cout<<"\nQuantidade de pessoas que responderam regular: " <<regular;
    cout<<"\nPercentagem de pessoas que responderam bom: " <<percentBom << "%\n";
    
    return 0;
}