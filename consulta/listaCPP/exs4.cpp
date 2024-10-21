/*Escreva um algoritmo que leia o c�digo de um aluno e suas tr�s notas. Calcule 
a m�dia ponderada do aluno, considerando que o peso para a maior nota seja 4 e 
para as duas restantes, 3. Mostre o c�digo do aluno, suas tr�s notas, a m�dia 
calculada e uma mensagem "APROVADO" se a m�dia for maior ou igual a 5 e 
"REPROVADO" se a m�dia for menor que 5.*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configura��o de localidade(idioma)
using namespace std; //Uso do namespace std para simplificar o codigo

int main() {
    setlocale(LC_ALL, "portuguese"); //Exiba caracteres em portugues, incluindo acentos
    
    int cod;
    float n1, n2, n3, n4, mediap;
	
	cout<<"===PROGRAMA ESCOLAR==="; 
	cout<<"\nInsira o codigo do aluno: "; cin>>cod;
	cout<<"\nInsira a nota 1: "; cin>>n1;
 	cout<<"\nInsira a nota 2: "; cin>>n2;
 	cout<<"\nInsira a nota 3: "; cin>>n3;
 	
 	mediap = ((n1*4) + (n1*3) + (n1*3) + (n1*3))/ 13;
 	
 	cout<<"\nc�digo - m�dia ponderada - situa��o final";
 	cout<<"\n"<<cod<<" - "<<mediap;
 	
 	if(mediap>=5){
		 cout<<" - APROVADO(A)!";
	 }else{
		 cout<<" - REPROVADO(A)!";
	 }
 	
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}