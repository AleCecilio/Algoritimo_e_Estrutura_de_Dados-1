#include <iostream>
#include <locale.h> 
using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
    int opcao;           // Para armazenar a op��o escolhida pelo usu�rio
    float nota1, nota2;  // Para armazenar as notas
    float nota3, peso1, peso2, peso3; // Para armazenar as notas e pesos na op��o 2
    float media, mediap;         // Para armazenar a m�dia calculada

    while(true){
        // Exibe o menu de op��es
        cout<<"MENU:" << endl;
        cout<<"1. Calcular m�dia aritm�tica" << endl;
        cout<<"2. Calcular m�dia ponderada" << endl;
        cout<<"3. Sair" << endl;
        cout<<"Escolha uma op��o: "; cin>>opcao;

        if(opcao == 1){
            // Op��o 1: Calcular m�dia aritm�tica
            cout<<"Digite a primeira nota: "; cin>>nota1;
            cout<<"Digite a segunda nota: "; cin >> nota2;
            
			media = (nota1 + nota2) / 2;
            
			cout<<"A m�dia aritm�tica �: " << media << "\n";
			
        }else if(opcao == 2){
            // Op��o 2: Calcular m�dia ponderada
            cout<<"1� nota: "; cin>>nota1;
            cout<<"Peso da 1� nota: "; cin>>peso1;
            cout<<"2� nota: "; cin>>nota2;
            cout<<"Peso da 2� nota: "; cin>>peso2;
            cout<<"3� nota: "; cin>>nota3;
            cout<<"Peso da 3� nota: "; cin>>peso3;
            
			mediap = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
            
			cout<<"A m�dia ponderada �: " << mediap << "\n";
			
        }else if(opcao == 3){
            // Op��o 3: Sair do programa
            cout<<"Saindo do programa...\n";
            break; // Encerra o loop e sai do programa
        }else{
            // Caso de op��o inv�lida
            cout<<"Op��o inv�lida! Tente novamente.\n";
        }
    }

    return 0;
}
