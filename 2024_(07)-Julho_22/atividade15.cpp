/*
4 - Quincas tem 1.75m e crece 1cm por ano, enquanto Z� Lel� tem 1.40m e cresce 3cm ao ano. Fa�a um programa que calcule  e imprima quantos anos ser�o necess�rios para que 
Z� ll� seja maior que Qincas.
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
	cout << "Levara "<<anos<<" anos para Z� Lel� ser mais alto que Quincas!";
	
	return 0;
}