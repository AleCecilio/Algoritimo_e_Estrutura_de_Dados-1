#include <iostream>
#include <locale>

using namespace std;

void somaMedia (int vet[], int tamanho, int &soma, int &media){
	for (int i=0; i<tamanho; i++ ) {
		soma += vet[i];
	}
	media = soma/tamanho;
}


int main()
{
	setlocale(LC_ALL,"pt_BR.UTF-8");
	int vetor[5] = {1,2,3,4,5};
	int soma=0, media=0;
	
	somaMedia(vetor,5,soma,media);
	cout << "Soma do Vetor : > " << soma << endl;
	cout << "Média do Vetor: > " << media;
	return 0;
}