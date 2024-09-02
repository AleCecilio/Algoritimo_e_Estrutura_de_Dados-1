/* Faça um programa que leia as medidas das alturas
e idades dos jodadores do time de volei de SI e 
ao final informe a média das alturas e idades,
 a maior idade e a menor altura.
 */

#include <iostream> 

using namespace std;

int main ()
{
	setlocale (LC_ALL, "portuguese");
	float a1, a2, a3, a4, a5, a6, menor_a;
	float i1, i2, i3, i4, i5, i6, maior_i;
	
	cout << "Digite a altura do 1° Jogador: "; cin >> a1;
	cout << "Digite a idade do 1° Jogador: "; cin >> i1;
	cout << "Digite a altura do 2° Jogador: "; cin >> a2;
	cout << "Digite a idade do 2° Jogador: "; cin >> i2;
	cout << "Digite a altura do 3° Jogador: "; cin >> a3;
	cout << "Digite a idade do 3° Jogador: "; cin >> i3;
	cout << "Digite a altura do 4° Jogador: "; cin >> a4;
	cout << "Digite a idade do 4° Jogador: "; cin >> i4;
	cout << "Digite a altura do 5° Jogador: "; cin >> a5;
	cout << "Digite a idade do 5° Jogador: "; cin >> i5;
	cout << "Digite a altura do 6° Jogador: "; cin >> a6;
	cout << "Digite a idade do 6° Jogador: "; cin >> i6;
	
	/*Menor altura*/
	menor_a = a1;
	if (menor_a > a2)
		menor_a = a2;
	if (menor_a > a3)
		menor_a = a3;
	if (menor_a > a4)
		menor_a = a4;
	if (menor_a > a5)
		menor_a = a5;
	if (menor_a > a6)
		menor_a = a6;
	
	/*Maior idade*/
	maior_i = i1;
	if (maior_i < i2)
		maior_i = i2;
	if (maior_i < i3)
		maior_i = i3;
	if (maior_i < i4)
		maior_i = i4;
	if (maior_i < i5)
		maior_i = i5;
	if (maior_i < i6)
		maior_i = i6;
	
	/*Resultados*/
	cout << "\nResultados:";
	cout << "\nA média das auturas é: " << ((a1+a2+a3+a4+a5+a6)/6);
	cout << "\nA média das idades é: " << ((i1+i2+i3+i4+i5+i6)/6);
	cout << "\nA menor altura é de: " <<menor_a;
	cout << "\nA maior idade é de: " <<maior_i;
	
	
			
	return 0;
}