/*Fa�a um programa que apresente o menu de op��es a seguir, que permita ao 
usu�rio escolher a op��o desejada, receba os dados necess�rios para executar a 
opera��o e mostre o resultado. Verifique a possibilidade de op��o inv�lida e n�o 
se preocupe com as restri��es como sal�rio inv�lido. 
Menu de op��es:
1. Novo sal�rio
2. F�rias
3. D�cimo terceiro
4. Sair
Digite a op��o desejada
Na op��o 1: receber o sal�rio de um funcion�rio, calcular e mostrar o novo 
sal�rio usando as regras a seguir:
Sal�rios Percentagem de aumento
At� $ 210,00 R15%
De R$ 210,00 a R$ 600,00 (inclusive) 10%
Acima de R$ 600,00 5%
Na op��o 2: receber o sal�rio de um funcion�rio, calcular e mostrar o valor de 
suas f�rias.
Sabe-se que as f�rias equivalem a seu sal�rio acrescido de um ter�o do sal�rio.
Na op��o 3: receber o sal�rio de um funcion�rio e o n�mero de meses de trabalho 
na empresa, no m�ximo doze, calcular e mostrar o valor do d�cimo terceiro. 
Sabe-se que o d�cimo terceiro equivale a seu sal�rio multiplicado pelo n�mero de 
meses de trabalho dividido por 12.
Na op��o 4: sair do programa.*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configura��o de localidade(idioma)
using namespace std; //Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); //Exiba caracteres em portugues, incluindo acentos
    
    
    
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}