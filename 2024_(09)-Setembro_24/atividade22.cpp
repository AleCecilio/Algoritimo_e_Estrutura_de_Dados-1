/*
Exemplo de Matriz
*/


#include <iostream>
#include <locale>

using namespace std;

int main()
{
	int matA [3][3], matB [3][3]={{1,2,3},{4,5,6},{7,8,9}};
	//leitura
	/* 
	for (int lin=0; lin<=2; lin++)
	{
		for (int col=0; col<=2; col++)
		{
			cout << "Informe valor ["<<lin<<"]["<<cool<<"]:";
			cin >> matA[lin][col];
		}
	}
	*/
	for (int lin=0; lin<=2; lin++)
	{
		cout << "Valores da linha "<<lin<<": ";
		cin >> matA[lin][0]>>matA[lin][1]>>matA[lin][2];
	}
	int matC[3][3];
	//matC é a soma de matA e matB
	for (int lin=0; lin<=2; lin++)
	{
		for (int col=0; col<=2; col++)
		{
			matC[lin][col]=matA[lin][col] + matB[lin][col];
			cout << matC[lin][col]<<"\t";
		}
	}
	
	return 0;
}