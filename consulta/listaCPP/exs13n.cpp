/*Fa�a um programa que apresente o menu de op��es a seguir:
Menu de op��es:
1. M�dia aritm�tica
2. M�dia ponderada
3. Sair
Digite a op��o desejada.
Na op��o 1: receber duas notas, calcular e mostrar a m�dia aritm�tica.
Na op��o 2: receber tr�s notas e seus respectivos pesos, calcular e mostrar a 
m�dia ponderada. Na op��o 3: sair do programa.
Verifique a possibilidade de op��o inv�lida. Nesse caso, o programa dever� 
mostrar uma mensagem.*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configura��o de localidade(idioma)
using namespace std; //Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); //Exiba caracteres em portugues, incluindo acentos
    
    
    
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}