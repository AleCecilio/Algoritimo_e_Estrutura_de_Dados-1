/*
4 - Quincas tem 1.75m e crece 1cm por ano, enquanto Zé Lelé tem 1.40m e cresce 3cm ao ano. Faça um programa que calcule  e imprima quantos anos serão necessários para que 
Zé llé seja maior que Qincas.
*/


#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL,"portuguese");
	int q=175, zl=140, anos=0;
	do 
	{
		q++;
		zl+=3;
		anos++;
	}while(zl<q);
	cout << "Levara "<<anos<<" anos para Zé Lelé ser mais alto que Quincas!";
	
	return 0;
}