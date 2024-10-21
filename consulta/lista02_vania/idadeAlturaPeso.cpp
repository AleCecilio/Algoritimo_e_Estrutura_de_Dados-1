/*Fa�a um programa que receba a idade, a altura e o peso de cinco pessoas, 
calcule e mostre:
a) a quantidade de pessoas com idade superior a 50 anos;
b) a m�dia das alturas das pessoas com idade entre 10 e 20 anos;
c) a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas
analisadas.*/

#include <iostream>  
#include <locale.h>  
using namespace std; 

int main(){
    setlocale(LC_ALL, "portuguese"); 
    
    //declara��o de vari�veis
    int idade, idade50=0, altura1020=0, peso40=0;
    float altura, peso, somaAltura1020=0.0, media1020, percent40;
    int i=0;
    
    cout << "=== BEM-VINDO(A) AO PROGRAMA ===\n";
    
    //loop para coletar dados de 5 pessoas
    while(i < 5){
        cout<<"\n=> Dados da " <<i+1<< "� pessoa:";            //exibe o n�mero da pessoa
        cout<<"\n| " <<i+1<< ". Insira a idade: "; cin>>idade; 
        cout<<"| " <<i+1<< ". Insira a altura: "; cin>>altura; 
        cout<<"| " <<i+1<< ". Insira o peso: "; cin>>peso; 
        i++;                                                   //incrementa o contador para a pr�xima pessoa
        
        //verifica se a idade � superior a 50 anos
        if(idade > 50){
            idade50++; //incrementa o contador de pessoas com idade superior a 50 anos
        }
        
        //verifica se a idade est� entre 10 e 20 anos
        if(idade >= 10 && idade <= 20){
            somaAltura1020 - somaAltura1020 + altura; //soma a altura da pessoa
            altura1020++;                             //incrementa o contador de pessoas nessa faixa et�ria
        }
        
        //verifica se o peso � inferior a 40 kg
        if(peso < 40){
            peso40++; //incrementa o contador de pessoas com peso inferior a 40 kg
        }
    }
    
    //calcula a m�dia das alturas das pessoas com idade entre 10 e 20 anos
    if(altura1020 > 0){
	    media1020 = somaAltura1020/altura1020;
	}else{
	    media1020 = 0; //fefine a m�dia como 0 se n�o h� pessoas na faixa et�ria
	}
    
    //calcula a porcentagem de pessoas com peso inferior a 40 kg
	percent40 = (peso40 / 5) * 100;
    
    // Exibe os resultados
    cout<<"\nIdade superior a 50 anos: " <<idade50;
    cout<<"\nM�dia das alturas das pessoas com idade entre 10 e 20 anos: " <<media1020;
    cout<<"\nPorcentagem de pessoas com peso inferior a 40kg: " <<percent40<< "%\n";
    
    return 0; 
}