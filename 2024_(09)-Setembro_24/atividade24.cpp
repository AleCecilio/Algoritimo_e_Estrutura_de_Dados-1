#include <iostream>
#include <locale>

using namespace std;

int main()
{
	int matA [4][2], matB [4][2], matC[4][2];
	for (int lin=0; lin<4; lin++)
	{
		cout << "Valores da linha "<<(lin+1)<<": ";
		cin >> matA[lin][0]>>matA[lin][1];
	}
	for (int lin=0; lin<4; lin++)
	{
		cout << "Valores da linha "<<(lin+1)<<": ";
		cin >> matB[lin][0]>>matB[lin][1];
	}
	for (int lin=0; lin<4; lin++)
	{
		for (int col=0; col<3; col++)
		{
			matC[lin][col] = matA[lin][col] - matB[lin][col];
			cout << matC[lin][col] << "\t";
		}
	}
	return 0;
}