#include <iostream>
#include <locale>

using namespace std;

void inverterVetor (int vet[], int &tamanho) {
	int aux;
	for (int i=0;i < tamanho; i++) {
		tamanho--;
		aux = vet[i];
		vet[i] = vet[tamanho];
		vet[tamanho] = aux;
	}
}
 
 int main()
 {
	 setlocale(LC_ALL,"portuguese");
     int tam = 5;
	 int vetor[tam];
	 
	 cout << "Digite os elementos do Vetor: \n";
	 for (int i=0; i < 5;i++){
		 cout << i+1 <<"° Posição: > ";
		 cin >> vetor[i];
	 }
	 
	 inverterVetor(vetor, tam);
	 cout << "Vetor Invetido: \n";
	 for (int i=0;i < 5; i++){
		 cout << vetor[i] << " ";
	 }
	 return 0;
 }