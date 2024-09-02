/*Faça um programa que receba a idade, a altura e o peso de cinco pessoas, 
calcule e mostre:
a) a quantidade de pessoas com idade superior a 50 anos;
b) a média das alturas das pessoas com idade entre 10 e 20 anos;
c) a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas
analisadas.*/

#include <iostream>  // Biblioteca para entrada e saída padrão
#include <locale.h>  // Biblioteca para configuração de localidade (idioma)
using namespace std; // Uso do namespace std para simplificar o código

int main() {
    setlocale(LC_ALL, "portuguese"); // Configura o programa para usar caracteres em português, incluindo acentos
    
    // Declaração de variáveis
    int idade, total50=0, count1020=0, count40=0;
    float altura, peso, sumAltura1020=0.0;
    int i=0;
    
    cout << "=== BEM-VINDO(A) AO PROGRAMA ===\n"; // Mensagem de boas-vindas
    
    // Loop para coletar dados de 5 pessoas
    while(i < 5){
        cout<<"\n=> Dados da " <<i+1<< "ª pessoa:"; // Exibe o número da pessoa
        cout<<"\n| " <<i+1<< ". Insira a idade: "; cin>>idade; // Coleta a idade
        cout<<"| " <<i+1<< ". Insira a altura: "; cin>>altura; // Coleta a altura
        cout<<"| " <<i+1<< ". Insira o peso: "; cin>>peso; // Coleta o peso
        i++; // Incrementa o contador para a próxima pessoa
        
        // Verifica se a idade é superior a 50 anos
        if(idade > 50){
            total50++; // Incrementa o contador de pessoas com idade superior a 50 anos
        }
        
        // Verifica se a idade está entre 10 e 20 anos
        if(idade >= 10 && idade <= 20){
            sumAltura1020 += altura; // Soma a altura da pessoa
            count1020++; // Incrementa o contador de pessoas nessa faixa etária
        }
        
        // Verifica se o peso é inferior a 40 kg
        if(peso < 40){
            count40++; // Incrementa o contador de pessoas com peso inferior a 40 kg
        }
    }
    
    // Calcula a média das alturas das pessoas com idade entre 10 e 20 anos
    float media1020 = (count1020 > 0) ? (sumAltura1020 / count1020) : 0;
    
    // Calcula a porcentagem de pessoas com peso inferior a 40 kg
    float percent40 = (count40 / 5.0) * 100;
    
    // Exibe os resultados
    cout<<"\nIdade superior a 50 anos: " <<total50;
    cout<<"\nMédia das alturas das pessoas com idade entre 10 e 20 anos: " <<media1020;
    cout<<"\nPorcentagem de pessoas com peso inferior a 40kg: " <<percent40<< "%\n";
    
    return 0; // Indica que o programa foi executado com sucesso
}
