#include <iostream>
#include <locale>

using namespace std;

// Definindo a struct para armazenar as informa��es de faixa et�ria
struct FaixaEtaria {
    int faixa;    // N�mero da faixa et�ria
    int contagem; // Contador de pessoas na faixa et�ria
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // Declara��o de vari�veis
    int idade[8]; // Array para armazenar a idade de 8 pessoas
    FaixaEtaria faixas[5] = { {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0} }; // Inicializa o array de structs com 0 pessoas em cada faixa
    float pf1, pf5;

    cout<<"|FAIXA ET�RIA IDADE";
    cout<<"\n|1�. At� 15 anos";
    cout<<"\n|2�. De 16 a 30 anos";
    cout<<"\n|3�. De 31 a 45 anos";
    cout<<"\n|4�. De 46 a 60 anos";
    cout<<"\n|5�. Acima de 60 anos\n\n";

    // Entrada de dados: Recebendo as idades das 8 pessoas
    for(int i = 0; i < 8; i++){
        cout<<"|Insira a idade da pessoa " << i + 1 << ": ";
        cin>>idade[i];
        
        // Verifica��o da faixa et�ria e incremento do contador
        if(idade[i] <= 15){
            faixas[0].contagem++;
        }else if(idade[i] <= 30){
            faixas[1].contagem++;
        }else if(idade[i] <= 45){
            faixas[2].contagem++;
        }else if(idade[i] <= 60){
            faixas[3].contagem++;
        }else{
            faixas[4].contagem++;
        }
    }

    // Exibindo os resultados
    cout<<"\nQuantidade de pessoas em cada faixa et�ria:\n";
    cout<<"faixa 1 (0-15 anos): " << faixas[0].contagem << " pessoas\n";
    cout<<"faixa 2 (16-30 anos): " << faixas[1].contagem << " pessoas\n";
    cout<<"faixa 3 (31-45 anos): " << faixas[2].contagem << " pessoas\n";
    cout<<"faixa 4 (46-60 anos): " << faixas[3].contagem << " pessoas\n";
    cout<<"faixa 5 (acima de 60 anos): " << faixas[4].contagem << " pessoas\n";

    // Calculando as porcentagens para a 1� e a 5� faixa et�ria
    pf1 = (faixas[0].contagem * 100.0) / 8;
    pf5 = (faixas[4].contagem * 100.0) / 8;

    cout<<"\n% de pessoas na faixa 1: " << pf1 << "%";
    cout<<"\n% de pessoas na faixa 5: " << pf5 << "%";

    return 0;
}