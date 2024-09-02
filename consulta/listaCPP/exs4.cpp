/*Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule 
a média ponderada do aluno, considerando que o peso para a maior nota seja 4 e 
para as duas restantes, 3. Mostre o código do aluno, suas três notas, a média 
calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e 
"REPROVADO" se a média for menor que 5.*/

#include <iostream>  //Biblioteca para entrada e saida padrao
#include <locale.h>  //Biblioteca para configuração de localidade(idioma)
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
 	
 	cout<<"\ncódigo - média ponderada - situação final";
 	cout<<"\n"<<cod<<" - "<<mediap;
 	
 	if(mediap>=5){
		 cout<<" - APROVADO(A)!";
	 }else{
		 cout<<" - REPROVADO(A)!";
	 }
 	
    return 0; //Retorna 0 para indicar que o programa foi executado com sucesso
}