/*Fa�a um programa que mostre o menu de opcoes a seguir, receba a opcao do 
usuario e os dados necessarios para executar cada operacao: 
Menu de Opcoes:
1 - Somar dois numeros; 
2 - Raiz Quadrada de um numero; 
Digite a opcao desejada:*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configura��o de localidade(idioma)
using namespace std; //Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); //Exiba caracteres em portugues, incluindo acentos

    float n1, n2, soma, raiz; //Declaracao das variaveis reais necessarias
    int op; //Variavel para armazenar a opcao do usuario

    cout << "===BEM-VINDO(A) � CALCULADORA PR�===\n";

    //Exibi��o do menu de opcoes para o usuario
    cout << "\n===MENU DE OP��ES===";
    cout << "\n1 - SOMAR DOIS N�MEROS.";
    cout << "\n2 - RA�Z QUADRADA DE UM N�MERO.";
    cout << "\nDigite a op��o desejada: "; cin >> op; //Leitura da opcao escolhida pelo usuario

    //Estrutura switch para executar a acao correspondente a opcao escolhida
    switch(op) {
        case 1: //Opcao para somar dois numeros
            cout << "\nN�mero 1: "; cin >> n1; 
            cout << "N�mero 2: "; cin >> n2; 
            soma = n1 + n2; //Calculo da soma
            cout << "1. Soma: " << soma << "\n"; //Exibe o resultado da soma
            break;

        case 2: //Opcao para calcular a raiz quadrada de um numero
            cout << "\nN�mero: "; cin >> n1; 
            raiz = n1 * n1; //Calculo da raiz quadrada 
            cout << "2. Ra�z quadrada: " << raiz << "\n"; //Exibe o resultado da raiz quadrada
            break;

        default: //Caso o usu�rio escolha uma op��o inv�lida
            cout << "\nOp��o inv�lida!\n"; //Mensagem para o caso de digitar alguma op fora do menu
            break;
    }
    
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}
