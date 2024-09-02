/*Faça um programa que mostre o menu de opcoes a seguir, receba a opcao do 
usuario e os dados necessarios para executar cada operacao: 
Menu de Opcoes:
1 - Somar dois numeros; 
2 - Raiz Quadrada de um numero; 
Digite a opcao desejada:*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configuração de localidade(idioma)
using namespace std; //Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); //Exiba caracteres em portugues, incluindo acentos

    float n1, n2, soma, raiz; //Declaracao das variaveis reais necessarias
    int op; //Variavel para armazenar a opcao do usuario

    cout << "===BEM-VINDO(A) À CALCULADORA PRÉ===\n";

    //Exibição do menu de opcoes para o usuario
    cout << "\n===MENU DE OPÇÕES===";
    cout << "\n1 - SOMAR DOIS NÚMEROS.";
    cout << "\n2 - RAÍZ QUADRADA DE UM NÚMERO.";
    cout << "\nDigite a opção desejada: "; cin >> op; //Leitura da opcao escolhida pelo usuario

    //Estrutura switch para executar a acao correspondente a opcao escolhida
    switch(op) {
        case 1: //Opcao para somar dois numeros
            cout << "\nNúmero 1: "; cin >> n1; 
            cout << "Número 2: "; cin >> n2; 
            soma = n1 + n2; //Calculo da soma
            cout << "1. Soma: " << soma << "\n"; //Exibe o resultado da soma
            break;

        case 2: //Opcao para calcular a raiz quadrada de um numero
            cout << "\nNúmero: "; cin >> n1; 
            raiz = n1 * n1; //Calculo da raiz quadrada 
            cout << "2. Raíz quadrada: " << raiz << "\n"; //Exibe o resultado da raiz quadrada
            break;

        default: //Caso o usuário escolha uma opção inválida
            cout << "\nOpção inválida!\n"; //Mensagem para o caso de digitar alguma op fora do menu
            break;
    }
    
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}
