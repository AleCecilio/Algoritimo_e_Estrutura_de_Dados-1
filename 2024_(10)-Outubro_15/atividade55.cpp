#include <iostream>
#include <locale>

using namespace std;

void atualizarMinMax (int vet[], int tam, int &min, int &max){
	min = vet[0];
	max = vet[0];
	for (int i=0;i<tam;i++){
		if (vet[i] < min){
			min = vet[i];
		 }
		if (vet[i] > max){ 
			max = vet[i];
		}
	}	
}


int main()
{
	setlocale(LC_ALL,"portuguese");
	int vetor[5] = {1,2,3,4,5};
	int min=0, max=0;
	atualizarMinMax(vetor, 5, min, max);
	cout << "Menor número do vetor: " << min << endl;
	cout << "Maior número do vetor: " << max;
	return 0;
}