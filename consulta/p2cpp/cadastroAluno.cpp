#include <iostream>
#include <locale>
#include <vector>
#include <string>

using namespace std;

struct Aluno{
    string nome;
    string dataNasc;
    string matricula;
    string end;
    string tel;
    string email;
    string curso;
    string obs;
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    vector<Aluno> alunos;
    int opcao;
    bool encontrado;

    do{
        cout<<"|MENU:                                  |\n";
        cout<<"|1 - Cadastrar aluno                    |\n";
        cout<<"|2 - Consultar dados do aluno           |\n";
        cout<<"|3 - Excluir dados do aluno             |\n";
        cout<<"|4 - Alterar dados do aluno             |\n";
        cout<<"|5 - Exibir todos os alunos cadastrados |\n";
        cout<<"|6 - Sair                               |\n";
        cout<<"|Escolha uma opção: "; cin >> opcao;
        cin.ignore(); // Limpa o buffer do cin

        switch(opcao){
            case 1:{
                Aluno novoAluno;
                bool matriculaRepetida = false;
                
                cout<<"\n\n==|CADASTRO DE ALUNO|==\n";

                cout<<"Nome completo: "; getline(cin, novoAluno.nome);
                cout<<"Data de nascimento (DD/MM/AAAA): "; getline(cin, novoAluno.dataNasc);
                cout<<"matrícula: "; getline(cin, novoAluno.matricula);

                // Loop baseado em índices
                for(int i=0; i<alunos.size(); ++i){
                    if(alunos[i].matricula == novoAluno.matricula){
                        matriculaRepetida = true;
                        break;
                    }
                }

                if(matriculaRepetida){
                    cout<<"Erro: Número de matrícula já cadastrado!\n";
                }else{
                    cout << "Endereço: "; getline(cin, novoAluno.end);
                    cout << "Telefone: "; getline(cin, novoAluno.tel);
                    cout << "E-mail: "; getline(cin, novoAluno.email);
                    cout << "Curso: "; getline(cin, novoAluno.curso);
                    cout << "Observações: "; getline(cin, novoAluno.obs);

                    alunos.push_back(novoAluno);
                    cout<<"Aluno cadastrado com sucesso!\n";
                }
                break;
            }
            case 2:{
                string pesquisa;
                encontrado = false;
                
                cout<<"\n==|CONSULTAR DADOS DO ALUNO|==\n";

                cout<<"Nome ou matrícula do aluno para consultar seus dados: "; getline(cin, pesquisa);

                // Loop baseado em índices
                for(int i=0; i<alunos.size(); ++i){
                    if(alunos[i].nome == pesquisa || alunos[i].matricula == pesquisa){
                        cout<<"Nome: " << alunos[i].nome << endl;
                        cout<<"Data de Nascimento: " << alunos[i].dataNasc << endl;
                        cout<<"Número de Matrícula: " << alunos[i].matricula << endl;
                        cout<<"Endereço: " << alunos[i].end << endl;
                        cout<<"Telefone: " << alunos[i].tel << endl;
                        cout<<"E-mail: " << alunos[i].email << endl;
                        cout<<"Curso: " << alunos[i].curso << endl;
                        cout<<"Observações: " << alunos[i].obs << endl;
                        encontrado = true;
                        break;
                    }
                }

                if(!encontrado) {
                    cout<<"Erro: Nome ou matrícula não encontrado!" << endl;
                }
                break;
            }
            case 3:{
                string matriculaExcluir;
                encontrado = false;
				
				cout<<"\n==|EXCLUIR DADOS DO ALUNO|==\n";
				
                cout<<"Matrícula do aluno a ser excluído: ";
                getline(cin, matriculaExcluir);

                // Loop baseado em índices
                for(int i = 0; i < alunos.size(); ++i){
                    if(alunos[i].matricula == matriculaExcluir){
                        // Remover aluno manualmente
                        for(int j = i; j < alunos.size() - 1; ++j) {
                            alunos[j] = alunos[j + 1];
                        }
                        alunos.pop_back(); // Remove o último aluno após a cópia
                        cout<<"Aluno excluído com sucesso!\n";
                        encontrado = true;
                        break;
                    }
                }

                if(!encontrado){
                    cout<<"Erro: Número de matrícula não encontrado!\n";
                }
                break;
            }
            case 4: {
                string matriculaAlterar;
                encontrado = false;
				
				cout<<"\n==|ALTERAR DADOS DO ALUNO|==\n";
				
                cout<<"Digite o número de matrícula do aluno para alterar: "; getline(cin, matriculaAlterar);

                // Loop baseado em índices
                for(int i=0; i<alunos.size(); ++i){
                    if (alunos[i].matricula == matriculaAlterar){
                        cout<<"Digite o novo nome completo do aluno: "; getline(cin, alunos[i].nome);
                        cout<<"Digite a nova data de nascimento (DD/MM/AAAA): "; getline(cin, alunos[i].dataNasc);
                        cout<<"Digite o novo endereço: "; getline(cin, alunos[i].end);
                        cout<<"Digite o novo telefone: "; getline(cin, alunos[i].tel);
                        cout<<"Digite o novo e-mail: "; getline(cin, alunos[i].email);
                        cout<<"Digite o novo curso: "; getline(cin, alunos[i].curso);
                        cout<<"Observações adicionais: "; getline(cin, alunos[i].obs);

                        cout<<"Dados do aluno alterados com sucesso!\n";
                        encontrado = true;
                        break;
                    }
                }

                if(!encontrado){
                    cout<<"Erro: Número de matrícula não encontrado!\n";
                }
                break;
            }
            case 5:{
			    cout << "\n==|ALUNOS CADASTRADOS|==\n";
			
			    if(alunos.size() == 0){
			        cout << "Nenhum aluno cadastrado.\n";
			    }else{
			        for(int i = 0; i < alunos.size(); ++i){
			            cout << "\n" << (i + 1) << ". " << alunos[i].nome << endl;
			            cout << "Data de Nascimento: " << alunos[i].dataNasc << endl;
			            cout << "Número de Matrícula: " << alunos[i].matricula << endl;
			            cout << "Endereço: " << alunos[i].end << endl;
			            cout << "Telefone: " << alunos[i].tel << endl;
			            cout << "E-mail: " << alunos[i].email << endl;
			            cout << "Curso: " << alunos[i].curso << endl;
			            cout << "Observações: " << alunos[i].obs << endl;
			        }
			    }
			    break;
			}
            case 6:
                cout<<"Saindo do programa.\n";
                break;
            default:
                cout<<"Opção inválida. Tente novamente.\n";
        }

        if(opcao != 6){
            cout<<"\nPressione Enter para continuar...";
            cin.ignore(); // Limpa o buffer do cin
            cin.get();    // Lê o Enter pressionado
        }
    }while(opcao != 6);

    return 0;
}