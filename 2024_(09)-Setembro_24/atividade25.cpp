#include <iostream>
#include <locale>

using namespace std;

int main()
{
	int A[3][2] = {{1,0},{2,1},{3,4}};
	int B[2][3] = {{0,1,2},{1,1,1}};
	int C[3][3];
	for (int linA=0;linA<2;linA++)
	{
		for (int colA=0; colA<2; colA++)
		{
			int s=0;
			for (int colB=0; colB<3; colB++)
			{
				s += A[linA][colA]*B[colA][colB];
				C[linA][colB] = s;
			}
		}
	}
	cout << C[0][0] << "- " << C[0][1] << "- " << C[0][2];
	return 0;
}