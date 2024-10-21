/*Faça um programa que receba a idade de oito pessoas, calcule e mostre
a) A quantidade de pessoas em cada faixa etária;
b) A porcentagem de pessoas na primeira faixa com relação ao total de pessoas;
c) A porcentagem de pessoas na última faixa com relação ao total de pessoas;
faixa etária Idade
1º. Até 15 anos
2º. De 16 a 30 anos
3º. De 31 a 45 anos
4º. De 46 a 60 anos
5º. Acima de 60 anos*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    //declaração de variáveis
    int idade[8];                       //cria um array (vetor) para armazenar a idade de 8 pessoas
    int f1=0, f2=0, f3=0, f4=0, f5 = 0; //variáveis para contar quantas pessoas estão em cada faixa etária.
    float pf1, pf5;
    
    cout<<"|FAIXA ETÁRIA IDADE";
    cout<<"\n|1º. Até 15 anos";
    cout<<"\n|2º. De 16 a 30 anos";
    cout<<"\n|3º. De 31 a 45 anos";
    cout<<"\n|4º. De 46 a 60 anos";
    cout<<"\n|5º. Acima de 60 anos\n\n";

    //entrada de dados: Recebendo as idades das 8 pessoas
    for(int i=0; i < 8; i++) { //um loop que vai de 0 a 7 (8 vezes) para preencher o vetor com as idades.
    	
        cout<<"|Insira a idade da pessoa " << i + 1 << ": "; cin>>idade[i]; //lê e armazena no vetor "idade" na posição correspondente.
        
        //verificação da faixa etária
        if(idade[i]<=15){
            f1++;                 //se a idade for até 15 anos, incrementa o contador da 1ª faixa etária.
        }else if(idade[i]<=30){
            f2++;                 //se a idade estiver entre 16 e 30 anos, incrementa o contador da 2ª faixa etária.
        }else if(idade[i]<=45){
            f3++;                 //se a idade estiver entre 31 e 45 anos, incrementa o contador da 3ª faixa etária.
        }else if(idade[i]<=60){
            f4++;                 //se a idade estiver entre 46 e 60 anos, incrementa o contador da 4ª faixa etária.
        }else{
            f5++;                 //se a idade for acima de 60 anos, incrementa o contador da 5ª faixa etária.
        }
    }

    //exibindo os resultados
    cout<<"\nQuantidade de pessoas em cada faixa etária:\n";
    cout<<"faixa 1 (0-15 anos): "<<f1<<" pessoas\n";         //mostra a quantidade de pessoas na 1ª f etária.
    cout<<"faixa 2 (16-30 anos): "<<f2<<" pessoas\n";        //mostra a quantidade de pessoas na 2ª f etária.
    cout<<"faixa 3 (31-45 anos): "<<f3<<" pessoas\n";        //mostra a quantidade de pessoas na 3ª f etária.
    cout<<"faixa 4 (46-60 anos): "<<f4<<" pessoas\n";        //mostra a quantidade de pessoas na 4ª f etária.
    cout<<"faixa 5 (acima de 60 anos): "<<f5<<" pessoas\n";  //mostra a quantidade de pessoas na 5ª f etária.
    
    pf1 = (f1 * 100) / 8; //calculo da porcentagem de pessoas na faia 1
    pf5 = (f5 * 100) / 8;

    // Calculando as porcentagens para a 1ª e a 5ª f etária
    
    cout<<"\n% de pessoas na faixa 1: "<<pf1;
    
	cout<<"\n% de pessoas na faixa 5: "<<pf5;

    return 0;
}
