#include <iostream>
#include <vector>

using namespace std;

struct  TAlunos {
    string nome;
    int matricula;
    float media_final;
};


vector<TAlunos> alunos;
vector<TAlunos> aprovados;
vector<TAlunos> reprovados;

void LerAlunos () {
	TAlunos aluno;
	cout << "Digite os Dados dos Alunos: \n";
    for (int i=0; i<10;i++) {
        cout << "Nome do Aluno: "; getline(cin,aluno.nome);
        cout << "Matrículaa do Aluno: "; cin >> aluno.matricula;
        cout << "Media Final do Aluno: "; cin >> aluno.media_final;
        cin.ignore(); 
        cout << endl;
        
        alunos.push_back(aluno);
    }
}

void AprovadosOuReprovados () {
    for (size_t i=0; i<alunos.size();i++) { 
        if (alunos[i].media_final<5) {
            reprovados.push_back(alunos[i]);
        } else {
            aprovados.push_back(alunos[i]);
        }
    }
}

void ExibirAlunosAprovados() {
    cout << "\nAlunos Aprovados: \n";
    if (aprovados.empty()) {
        cout << "Nenhum aluno aprovado.\n";
    } else {
        for (size_t i=0;i<aprovados.size();i++) {
            cout << "Nome: " << aprovados[i].nome 
                << ", Matrícula: " << aprovados[i].matricula 
                << ", Média: " << aprovados[i].media_final << endl;
        }
        cout << endl;

    }
}

void ExibirAlunosReprovados() {
    cout << "Alunos Reprovados: \n";
    if (reprovados.empty()) {
        cout << "Nenhum aluno reprovado.\n";
    } else {
        for (size_t i=0;i<reprovados.size();i++) {
            cout << "Nome: " << reprovados[i].nome 
                << ", Matricula: " << reprovados[i].matricula 
                << ", Média: " << reprovados[i].media_final << endl;
        }
        cout << endl;
    }
}


int main () {
    setlocale (LC_ALL,"portuguese");
    
    LerAlunos();
    AprovadosOuReprovados();
    ExibirAlunosAprovados();
    ExibirAlunosReprovados();

    return 0;
}