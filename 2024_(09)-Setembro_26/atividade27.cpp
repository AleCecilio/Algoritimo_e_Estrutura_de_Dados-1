#include <iostream>
#include <locale>

using namespace std;

int main()
{
	int mat[4][4];
	for (int lin=0;lin<4;lin++)
	{
		cout << "Valores da linha " <<lin+1<<": ";
		cin >> mat[lin][0]>>mat[lin][1]>>mat[lin][2]>>mat[lin][3];
	}
	cout << mat[0][0]  << " " << mat[1][1] << " " << mat[2][2] << " " <<mat[3][3] <<endl;
	cout << mat[0][0] + mat[1][1] + mat[2][2] + mat[3][3];
	
	return 0;
}