#include <iostream>
#include <locale.h> 
using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
    int opcao;           // Para armazenar a opção escolhida pelo usuário
    float nota1, nota2;  // Para armazenar as notas
    float nota3, peso1, peso2, peso3; // Para armazenar as notas e pesos na opção 2
    float media, mediap;         // Para armazenar a média calculada

    while(true){
        // Exibe o menu de opções
        cout<<"MENU:" << endl;
        cout<<"1. Calcular média aritmética" << endl;
        cout<<"2. Calcular média ponderada" << endl;
        cout<<"3. Sair" << endl;
        cout<<"Escolha uma opção: "; cin>>opcao;

        if(opcao == 1){
            // Opção 1: Calcular média aritmética
            cout<<"Digite a primeira nota: "; cin>>nota1;
            cout<<"Digite a segunda nota: "; cin >> nota2;
            
			media = (nota1 + nota2) / 2;
            
			cout<<"A média aritmética é: " << media << "\n";
			
        }else if(opcao == 2){
            // Opção 2: Calcular média ponderada
            cout<<"1° nota: "; cin>>nota1;
            cout<<"Peso da 1° nota: "; cin>>peso1;
            cout<<"2° nota: "; cin>>nota2;
            cout<<"Peso da 2° nota: "; cin>>peso2;
            cout<<"3° nota: "; cin>>nota3;
            cout<<"Peso da 3° nota: "; cin>>peso3;
            
			mediap = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
            
			cout<<"A média ponderada é: " << mediap << "\n";
			
        }else if(opcao == 3){
            // Opção 3: Sair do programa
            cout<<"Saindo do programa...\n";
            break; // Encerra o loop e sai do programa
        }else{
            // Caso de opção inválida
            cout<<"Opção inválida! Tente novamente.\n";
        }
    }

    return 0;
}
