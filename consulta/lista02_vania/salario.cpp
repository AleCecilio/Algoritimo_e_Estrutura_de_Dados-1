#include <iostream>
using namespace std;

int main() {
    int opcao, mesesTrabalho;  
    float salario, novoSalario, ferias, decimoTerceiro; 

    while (true) {
        // Exibe o menu de op��es
        cout<<"MENU:" << endl;
        cout<<"1. Calcular aumento de sal�rio" << endl;
        cout<<"2. Calcular valor das f�rias" << endl;
        cout<<"3. Calcular d�cimo terceiro" << endl;
        cout<<"4. Sair" << endl;
        cout<<"Escolha uma op��o: "; cin >> opcao;

        if(opcao == 1){
            // Op��o 1: Calcular aumento de sal�rio
            cout<<"Digite o sal�rio do funcion�rio: "; cin>>salario;

            // Calcula o novo sal�rio baseado nas regras
            if(salario <= 210.00){
                novoSalario = salario * 1.15; // 15% de aumento
            }else if(salario <= 600.00){
                novoSalario = salario * 1.10; // 10% de aumento
            } else{
                novoSalario = salario * 1.05; // 5% de aumento
            }

            cout<<"O novo sal�rio �: " << novoSalario << endl;

        }else if(opcao == 2){
            // Op��o 2: Calcular valor das f�rias
            cout<<"Digite o sal�rio do funcion�rio: "; cin>>salario;

            // Calcula o valor das f�rias
            ferias = salario + (salario / 3); // Sal�rio + 1/3 do sal�rio
            cout<<"O valor das f�rias �: " << ferias << endl;

        }else if(opcao == 3){
            // Op��o 3: Calcular d�cimo terceiro
            cout<<"Digite o sal�rio do funcion�rio: "; cin>>salario;
            cout<<"Digite o n�mero de meses trabalhados (m�ximo 12): "; cin>>mesesTrabalho;

            // Calcula o d�cimo terceiro
            decimoTerceiro = salario * mesesTrabalho / 12;
            cout<<"O valor do d�cimo terceiro �: " << decimoTerceiro << endl;

        }else if (opcao == 4) {
            // Op��o 4: Sair do programa
            cout<<"Saindo do programa...\n";
            break; // Encerra o loop e sai do programa

        }else{
            // Caso de op��o inv�lida
            cout<<"Op��o inv�lida! Tente novamente.\n";
        }
    }

    return 0; // Indica que o programa terminou com sucesso
}
