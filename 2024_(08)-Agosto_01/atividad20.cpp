#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	const int tam=10;
	int vetA[tam}, vetB[tam];
	for (int i=0; i<tam; i++) 
	{
		cout <<"Digite o valor para vetorA ";
		cin >> vetA[i];
	}
		
	return 0;
}