/*Faça um programa que receba a idade, a altura e o peso de cinco pessoas, 
calcule e mostre:
a) a quantidade de pessoas com idade superior a 50 anos;
b) a média das alturas das pessoas com idade entre 10 e 20 anos;
c) a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas
analisadas.*/

#include <iostream>  
#include <locale.h>  
using namespace std; 

int main(){
    setlocale(LC_ALL, "portuguese"); 
    
    //declaração de variáveis
    int idade, idade50=0, altura1020=0, peso40=0;
    float altura, peso, somaAltura1020=0.0, media1020, percent40;
    int i=0;
    
    cout << "=== BEM-VINDO(A) AO PROGRAMA ===\n";
    
    //loop para coletar dados de 5 pessoas
    while(i < 5){
        cout<<"\n=> Dados da " <<i+1<< "ª pessoa:";            //exibe o número da pessoa
        cout<<"\n| " <<i+1<< ". Insira a idade: "; cin>>idade; 
        cout<<"| " <<i+1<< ". Insira a altura: "; cin>>altura; 
        cout<<"| " <<i+1<< ". Insira o peso: "; cin>>peso; 
        i++;                                                   //incrementa o contador para a próxima pessoa
        
        //verifica se a idade é superior a 50 anos
        if(idade > 50){
            idade50++; //incrementa o contador de pessoas com idade superior a 50 anos
        }
        
        //verifica se a idade está entre 10 e 20 anos
        if(idade >= 10 && idade <= 20){
            somaAltura1020 - somaAltura1020 + altura; //soma a altura da pessoa
            altura1020++;                             //incrementa o contador de pessoas nessa faixa etária
        }
        
        //verifica se o peso é inferior a 40 kg
        if(peso < 40){
            peso40++; //incrementa o contador de pessoas com peso inferior a 40 kg
        }
    }
    
    //calcula a média das alturas das pessoas com idade entre 10 e 20 anos
    if(altura1020 > 0){
	    media1020 = somaAltura1020/altura1020;
	}else{
	    media1020 = 0; //fefine a média como 0 se não há pessoas na faixa etária
	}
    
    //calcula a porcentagem de pessoas com peso inferior a 40 kg
	percent40 = (peso40 / 5) * 100;
    
    // Exibe os resultados
    cout<<"\nIdade superior a 50 anos: " <<idade50;
    cout<<"\nMédia das alturas das pessoas com idade entre 10 e 20 anos: " <<media1020;
    cout<<"\nPorcentagem de pessoas com peso inferior a 40kg: " <<percent40<< "%\n";
    
    return 0; 
}