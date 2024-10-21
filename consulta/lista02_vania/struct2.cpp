#include <iostream>
#include <locale>

using namespace std;

// Defini��o da estrutura Pessoa
struct Pessoa {
    string nome;
    int idade;
    float altura;
};

int main() {
    
    setlocale(LC_ALL, "Portuguese");
    
    // Cria��o de uma vari�vel do tipo Pessoa
    Pessoa p1;
    
    // Solicita��o de dados ao usu�rio
    cout<<"Digite o nome da pessoa: "; getline(cin, p1.nome); // Utiliza getline para ler nomes com espa�o
	                         //getline: � como se o programa desse uma limpadinha no q sobrou no teclado depois q vc 
							 //digitou algo, pra garantir q a pr�xima coisa q vc escrever seja lida�corretamente
    
    cout<<"Digite a idade da pessoa: "; cin>>p1.idade; 
    
    cout<<"Digite a altura da pessoa (em metros): "; cin>>p1.altura;
    
    // Exibi��o das informa��es da pessoa
    cout<< p1.nome << " tem " << p1.idade << " anos e mede " << p1.altura << " m." << endl;

    return 0;
}
