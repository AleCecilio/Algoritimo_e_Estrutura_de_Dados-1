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
    
    // Criação de uma variável do tipo Pessoa
    Pessoa p1;
    
    // Solicitação de dados ao usuário
    cout<<"Digite o nome da pessoa: "; getline(cin, p1.nome); // Utiliza getline para ler nomes com espaço
	                         //getline: é como se o programa desse uma limpadinha no q sobrou no teclado depois q vc 
							 //digitou algo, pra garantir q a próxima coisa q vc escrever seja lida corretamente
    
    cout<<"Digite a idade da pessoa: "; cin>>p1.idade; 
    
    cout<<"Digite a altura da pessoa (em metros): "; cin>>p1.altura;
    
    // Exibição das informações da pessoa
    cout<< p1.nome << " tem " << p1.idade << " anos e mede " << p1.altura << " m." << endl;

    return 0;
}
