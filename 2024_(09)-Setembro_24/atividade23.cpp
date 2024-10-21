#include <iostream>
#include <locale>

using namespace std;

int main()
{
	int matA [2][3], matB [2][3];
	for (int lin=0; lin<2; lin++)
	{
		cout << "Valores da linha "<<(lin+1)<<": ";
		cin >> matA[lin][0]>>matA[lin][1]>>matA[lin][2];
	}
	for (int lin=0; lin<2; lin++)
	{
		for (int col=0; col<3; col++)
		{
			matB[lin][col] = matA[lin][col]*2;
			cout << matB[lin][col] << "\t";
		}
	}
	return 0;
}