#include <iostream>
using namespace std;

int main() {
    int opcao, mesesTrabalho;  
    float salario, novoSalario, ferias, decimoTerceiro; 

    while (true) {
        // Exibe o menu de opções
        cout<<"MENU:" << endl;
        cout<<"1. Calcular aumento de salário" << endl;
        cout<<"2. Calcular valor das férias" << endl;
        cout<<"3. Calcular décimo terceiro" << endl;
        cout<<"4. Sair" << endl;
        cout<<"Escolha uma opção: "; cin >> opcao;

        if(opcao == 1){
            // Opção 1: Calcular aumento de salário
            cout<<"Digite o salário do funcionário: "; cin>>salario;

            // Calcula o novo salário baseado nas regras
            if(salario <= 210.00){
                novoSalario = salario * 1.15; // 15% de aumento
            }else if(salario <= 600.00){
                novoSalario = salario * 1.10; // 10% de aumento
            } else{
                novoSalario = salario * 1.05; // 5% de aumento
            }

            cout<<"O novo salário é: " << novoSalario << endl;

        }else if(opcao == 2){
            // Opção 2: Calcular valor das férias
            cout<<"Digite o salário do funcionário: "; cin>>salario;

            // Calcula o valor das férias
            ferias = salario + (salario / 3); // Salário + 1/3 do salário
            cout<<"O valor das férias é: " << ferias << endl;

        }else if(opcao == 3){
            // Opção 3: Calcular décimo terceiro
            cout<<"Digite o salário do funcionário: "; cin>>salario;
            cout<<"Digite o número de meses trabalhados (máximo 12): "; cin>>mesesTrabalho;

            // Calcula o décimo terceiro
            decimoTerceiro = salario * mesesTrabalho / 12;
            cout<<"O valor do décimo terceiro é: " << decimoTerceiro << endl;

        }else if (opcao == 4) {
            // Opção 4: Sair do programa
            cout<<"Saindo do programa...\n";
            break; // Encerra o loop e sai do programa

        }else{
            // Caso de opção inválida
            cout<<"Opção inválida! Tente novamente.\n";
        }
    }

    return 0; // Indica que o programa terminou com sucesso
}
