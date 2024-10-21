/*Cada espectador de um cinema respondeu a um question�rio no qual constava sua 
idade e sua opini�o em rela��o ao filme: �timo � 3; bom � 2; regular � 
1. Fa�a um programa que receba a idade e a opini�o de 15 espectadores, calcule e mostre:
a) a m�dia das idades das pessoas que responderam �timo;
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
    
    cout<<"=== AVALIA��O AO FILME ===";
    
    while(i<ttpessoas){
        cout<<"\n=> Dados do " <<i+1<< "� espectador:";
        cout<<"\n| Insira sua idade: "; cin>>idade;

        cout<<"\n|MENU DE OP��ES";
        cout<<"\n| 3 - �timo";
        cout<<"\n| 2 - bom";
        cout<<"\n| 1 - regular";
        cout<<"\nInsira o c�digo de sua avalia��o: "; cin>>op;
        
        switch(op){
            case 3: 
				somaIdadeOtimo = somaIdadeOtimo + idade;
                otimo++;
                break;
            
            case 2: bom++; break;
            
            case 1: regular++; break;
            
            default: cout<<"Op��o Inv�lida!!";
                i--; //decrementa i para repetir a entrada de dados para o mesmo espectador
                break;
        }
        
        i++; //incrementa o contador para o pr�ximo espectador
    }
    
    if(otimo>0){
	    mediaIdadeOtimo = somaIdadeOtimo / otimo; //calcula a m�dia das idades se houver pelo menos uma pessoa que avaliou como "�timo"
	} else {
	    mediaIdadeOtimo=0;                      //sefine a m�dia como 0 se n�o houver avalia��es como "�timo"
	}

    //calcula a porcentagem de pessoas que responderam bom
    percentBom = (bom / ttpessoas) * 100;
    
    //exibe os resultados
    cout<<"\nM�dia das idades das pessoas que responderam �timo: " <<mediaIdadeOtimo;
    cout<<"\nQuantidade de pessoas que responderam regular: " <<regular;
    cout<<"\nPercentagem de pessoas que responderam bom: " <<percentBom << "%\n";
    
    return 0;
}