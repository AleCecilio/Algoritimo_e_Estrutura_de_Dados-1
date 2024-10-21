#include <iostream>
#include <locale>

using namespace std;

// Definição da estrutura Pessoa
struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
    // Criação e inicialização de uma variável do tipo Pessoa
    Pessoa p1;
    p1.nome = "Mel";
    p1.idade = 18;
    p1.altura = 1.67;

    // Exibição das informações da pessoa
    cout << p1.nome << " tem " << p1.idade << " anos e mede " << p1.altura << " m." << endl;

    return 0;
}
