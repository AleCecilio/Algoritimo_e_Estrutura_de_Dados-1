#include <iostream>
#include <locale>

using namespace std;

void aumentarVetor (int vet[], int &tamanho, int &adic) {
	for (int i=0;i<tamanho;i++){
		vet[i]+=adic;
	}
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	int tam=5;
	int vetor[5] = {1,2,3,4,5};
	int adicional;
	
	cout << "Valor Adiciuonal: > ";
	cin >> adicional;
	
	aumentarVetor(vetor,tam,adicional);
	
	cout << "Vetor após o valor adionado: \n";
	for (int i=0;i<tam;i++){
		cout << vetor[i] << " ";
	}
	return 0;
}