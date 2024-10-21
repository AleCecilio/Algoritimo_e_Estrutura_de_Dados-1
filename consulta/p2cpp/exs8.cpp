#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
    
	string nome;
    char continuar;

    do{
        cout<<"Digite o nome do aluno: "; cin>>nome;
        cout<<"Aluno "<<nome<<" cadastrado com sucesso!\n";

        cout<<"Deseja cadastrar outro aluno? (S/N): "; cin>>continuar;
    }while(continuar == 'S' || continuar == 's');

    cout<<"Cadastro de alunos encerrado.";
    return 0;
}
