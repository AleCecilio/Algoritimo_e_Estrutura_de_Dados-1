/*Faça um Programa que pergunte quanto o usuário ganha por hora e o número de 
horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido 
mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS 
e 5% para o sindicato, faça um programa que nos dê:
a. salário bruto.
b. quanto pagou ao INSS.
c. quanto pagou ao sindicato.
d. o salário líquido.
obs: Salário Líquido. = Salário Bruto - Descontos */

#include <iostream>  // Biblioteca para entrada e saida padrao
#include <locale.h>  // Biblioteca para configuração de localidade(idioma)
using namespace std; // Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); // Exibe caracteres em portugues, incluindo acentos
    
    float val_hr, hrs_trab, sal_bruto, inss, sindicato, imp_rend, sal_liq;
    
    cout<<"===CONTADOR SALARIAL===";
    cout<<"\nInsira o valor ganho por hora: "; cin >> val_hr;
    cout<<"\nInsira o número de horas trabalhadas no mês: "; cin >> hrs_trab;
    
    sal_bruto = val_hr * hrs_trab; //salario bruto
    
	imp_rend = sal_bruto * 0.11;  //imposto de Renda 11%
    
	inss = sal_bruto * 0.08; //INSS 8%
    
	sindicato = sal_bruto * 0.05; //sindicato 5%
    
	sal_liq = sal_bruto - imp_rend - inss - sindicato; //salário líquido
    
    cout << "\nSalário Bruto: R$" << sal_bruto; //a
    cout << "\nQuanto pagou ao INSS: R$" << inss; //b
    cout << "\nQuanto pagou ao Sindicato: R$" << sindicato; //c
    cout << "\nSalário Líquido: R$" << sal_liq; //d
    
    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
