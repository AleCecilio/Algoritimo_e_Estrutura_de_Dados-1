/*Fa�a um Programa que pergunte quanto o usu�rio ganha por hora e o n�mero de 
horas trabalhadas no m�s. Calcule e mostre o total do seu sal�rio no referido 
m�s, sabendo-se que s�o descontados 11% para o Imposto de Renda, 8% para o INSS 
e 5% para o sindicato, fa�a um programa que nos d�:
a. sal�rio bruto.
b. quanto pagou ao INSS.
c. quanto pagou ao sindicato.
d. o sal�rio l�quido.
obs: Sal�rio L�quido. = Sal�rio Bruto - Descontos */

#include <iostream>  // Biblioteca para entrada e saida padrao
#include <locale.h>  // Biblioteca para configura��o de localidade(idioma)
using namespace std; // Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); // Exibe caracteres em portugues, incluindo acentos
    
    float val_hr, hrs_trab, sal_bruto, inss, sindicato, imp_rend, sal_liq;
    
    cout<<"===CONTADOR SALARIAL===";
    cout<<"\nInsira o valor ganho por hora: "; cin >> val_hr;
    cout<<"\nInsira o n�mero de horas trabalhadas no m�s: "; cin >> hrs_trab;
    
    sal_bruto = val_hr * hrs_trab; //salario bruto
    
	imp_rend = sal_bruto * 0.11;  //imposto de Renda 11%
    
	inss = sal_bruto * 0.08; //INSS 8%
    
	sindicato = sal_bruto * 0.05; //sindicato 5%
    
	sal_liq = sal_bruto - imp_rend - inss - sindicato; //sal�rio l�quido
    
    cout << "\nSal�rio Bruto: R$" << sal_bruto; //a
    cout << "\nQuanto pagou ao INSS: R$" << inss; //b
    cout << "\nQuanto pagou ao Sindicato: R$" << sindicato; //c
    cout << "\nSal�rio L�quido: R$" << sal_liq; //d
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
