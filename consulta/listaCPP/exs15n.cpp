/*Faça um programa que apresente o menu de opções a seguir, que permita ao 
usuário escolher a opção desejada, receba os dados necessários para executar a 
operação e mostre o resultado. Verifique a possibilidade de opção inválida e não 
se preocupe com as restrições como salário inválido. 
Menu de opções:
1. Novo salário
2. Férias
3. Décimo terceiro
4. Sair
Digite a opção desejada
Na opção 1: receber o salário de um funcionário, calcular e mostrar o novo 
salário usando as regras a seguir:
Salários Percentagem de aumento
Até $ 210,00 R15%
De R$ 210,00 a R$ 600,00 (inclusive) 10%
Acima de R$ 600,00 5%
Na opção 2: receber o salário de um funcionário, calcular e mostrar o valor de 
suas férias.
Sabe-se que as férias equivalem a seu salário acrescido de um terço do salário.
Na opção 3: receber o salário de um funcionário e o número de meses de trabalho 
na empresa, no máximo doze, calcular e mostrar o valor do décimo terceiro. 
Sabe-se que o décimo terceiro equivale a seu salário multiplicado pelo número de 
meses de trabalho dividido por 12.
Na opção 4: sair do programa.*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configuração de localidade(idioma)
using namespace std; //Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); //Exiba caracteres em portugues, incluindo acentos
    
    
    
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}