#include <iostream>

using namespace std;

int main()
{
	float vet1[10], vet2[10], vet3[20];
	for(int i=0; i <10;i++)
	{
		cout << "Digite o valor para vetor 1: ";
		cin >> vet1[i];
		vet3[i] = vet1[i];
	}
	for(int i=0; i <10;i++)
	{
		cout << "Digite o valor para vetor 2: ";
		cin >> vet2[i];
		vet3[i] = vet2[i];
	}
	for (int i=0; i<20; i++)
		cout << vet3[i] <<" ";
		
	return 0;
}