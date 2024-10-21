/*Fa�a um programa que receba a idade de oito pessoas, calcule e mostre
a) A quantidade de pessoas em cada faixa et�ria;
b) A porcentagem de pessoas na primeira faixa com rela��o ao total de pessoas;
c) A porcentagem de pessoas na �ltima faixa com rela��o ao total de pessoas;
faixa et�ria Idade
1�. At� 15 anos
2�. De 16 a 30 anos
3�. De 31 a 45 anos
4�. De 46 a 60 anos
5�. Acima de 60 anos*/

#include <iostream>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    //declara��o de vari�veis
    int idade[8];                       //cria um array (vetor) para armazenar a idade de 8 pessoas
    int f1=0, f2=0, f3=0, f4=0, f5 = 0; //vari�veis para contar quantas pessoas est�o em cada faixa et�ria.
    float pf1, pf5;
    
    cout<<"|FAIXA ET�RIA IDADE";
    cout<<"\n|1�. At� 15 anos";
    cout<<"\n|2�. De 16 a 30 anos";
    cout<<"\n|3�. De 31 a 45 anos";
    cout<<"\n|4�. De 46 a 60 anos";
    cout<<"\n|5�. Acima de 60 anos\n\n";

    //entrada de dados: Recebendo as idades das 8 pessoas
    for(int i=0; i < 8; i++) { //um loop que vai de 0 a 7 (8 vezes) para preencher o vetor com as idades.
    	
        cout<<"|Insira a idade da pessoa " << i + 1 << ": "; cin>>idade[i]; //l� e armazena no vetor "idade" na posi��o correspondente.
        
        //verifica��o da faixa et�ria
        if(idade[i]<=15){
            f1++;                 //se a idade for at� 15 anos, incrementa o contador da 1� faixa et�ria.
        }else if(idade[i]<=30){
            f2++;                 //se a idade estiver entre 16 e 30 anos, incrementa o contador da 2� faixa et�ria.
        }else if(idade[i]<=45){
            f3++;                 //se a idade estiver entre 31 e 45 anos, incrementa o contador da 3� faixa et�ria.
        }else if(idade[i]<=60){
            f4++;                 //se a idade estiver entre 46 e 60 anos, incrementa o contador da 4� faixa et�ria.
        }else{
            f5++;                 //se a idade for acima de 60 anos, incrementa o contador da 5� faixa et�ria.
        }
    }

    //exibindo os resultados
    cout<<"\nQuantidade de pessoas em cada faixa et�ria:\n";
    cout<<"faixa 1 (0-15 anos): "<<f1<<" pessoas\n";         //mostra a quantidade de pessoas na 1� f et�ria.
    cout<<"faixa 2 (16-30 anos): "<<f2<<" pessoas\n";        //mostra a quantidade de pessoas na 2� f et�ria.
    cout<<"faixa 3 (31-45 anos): "<<f3<<" pessoas\n";        //mostra a quantidade de pessoas na 3� f et�ria.
    cout<<"faixa 4 (46-60 anos): "<<f4<<" pessoas\n";        //mostra a quantidade de pessoas na 4� f et�ria.
    cout<<"faixa 5 (acima de 60 anos): "<<f5<<" pessoas\n";  //mostra a quantidade de pessoas na 5� f et�ria.
    
    pf1 = (f1 * 100) / 8; //calculo da porcentagem de pessoas na faia 1
    pf5 = (f5 * 100) / 8;

    // Calculando as porcentagens para a 1� e a 5� f et�ria
    
    cout<<"\n% de pessoas na faixa 1: "<<pf1;
    
	cout<<"\n% de pessoas na faixa 5: "<<pf5;

    return 0;
}
