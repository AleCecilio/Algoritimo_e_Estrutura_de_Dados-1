#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct TMorador {
    string cpf;
    string nome;
    string data_nasc;
    string endereco;
    string sexo;
    string telefone;
    string email;
    string tipo;
};

struct TVisitante {
    string codigo;
    string cpf; 
    string cpf_morador;
    string nome;
    string data_visita_inicial;
    string data_visita_final; 
};

vector<TMorador> moradores;
vector<TVisitante> visitantes;
string op_morador;
string op_visitante;

void carregarMoradores() {
    ifstream dadosMoradores("moradores.txt");
    string linha;
    if (dadosMoradores.is_open()){
        while (getline(dadosMoradores, linha)) {
            TMorador morador;
            size_t pos = 0;
            
            pos = linha.find(";");
            morador.cpf = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            pos = linha.find(";");
            morador.nome = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            pos = linha.find(";");
            morador.data_nasc = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            pos = linha.find(";");
            morador.endereco = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            pos = linha.find(";");
            morador.sexo = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            pos = linha.find(";");
            morador.telefone = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            pos = linha.find(";");
            morador.email = linha.substr(0, pos);
            linha = linha.substr(pos+1);
            
            morador.tipo = linha;
            
            moradores.push_back(morador);
        }
    }
    dadosMoradores.close();
}

void carregarVisitantes() {
    ifstream dadosVisitantes("visitantes.txt");
    string linha;
    if (dadosVisitantes.is_open()){
        while (getline(dadosVisitantes, linha)) {
            TVisitante visitante;
            size_t pos = 0;
            
            pos = linha.find(",");
            visitante.codigo = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            pos = linha.find(";");
            visitante.cpf = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            pos = linha.find(";");
            visitante.cpf_morador = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            pos = linha.find(";");
            visitante.nome = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            pos = linha.find(";");
            visitante.data_visita_inicial = linha.substr(0, pos);
            linha = linha.substr(pos+1);

            visitante.data_visita_final = linha;
            
            visitantes.push_back(visitante);
        }  
    } 
    dadosVisitantes.close();
}

void salvarVisitantes() { 
    ofstream dadosVisitantes("visitantes.txt");
    if (dadosVisitantes.is_open()) {
        for (size_t i = 0; i < visitantes.size(); i++) {
            dadosVisitantes << visitantes[i].codigo << ";";
            dadosVisitantes << visitantes[i].cpf << ";";
            dadosVisitantes << visitantes[i].nome << ";";
            dadosVisitantes << visitantes[i].cpf_morador << ";";
            dadosVisitantes << visitantes[i].data_visita_inicial << ";";
            dadosVisitantes << visitantes[i].data_visita_final << "\n";
        }
        dadosVisitantes.close();
    }
}

void salvarMoradores() {
    ofstream dadosMoradores("moradores.txt");
    if (dadosMoradores.is_open()) {
        for (size_t i = 0; i < moradores.size(); i++) {
            dadosMoradores << moradores[i].cpf << ";";
            dadosMoradores << moradores[i].nome << ";";
            dadosMoradores << moradores[i].data_nasc << ";";
            dadosMoradores << moradores[i].endereco << ";";
            dadosMoradores << moradores[i].sexo << ";";
            dadosMoradores << moradores[i].telefone << ";";
            dadosMoradores << moradores[i].email << ";";
            dadosMoradores << moradores[i].tipo << "\n";
        }
        dadosMoradores.close();
    }
}

void cadastrarMorador() {
	TMorador morador;
	
	cout << "Cadastrar Morador\n";
	cin.ignore();
	cout << "Nome: "; getline(cin,morador.nome);
	cout << "CPF: "; getline(cin,morador.cpf);
	cout << "Data de Nascimento: "; getline(cin,morador.data_nasc);
	cout << "Ende�o: "; getline(cin,morador.endereco);
	cout << "Sexo (masculino/feminini): "; getline(cin, morador.sexo);
	cout << "Telefone: "; getline(cin,morador.telefone);
	cout << "E-mail: "; getline(cin,morador.email);
	cout << "Tipo (proprietario/dependente): "; getline(cin,morador.tipo);
	
	moradores.push_back(morador);
	salvarMoradores();
}

string buscarMorador () {
	cout << "Buscar Morador: \n";
	cin.ignore();
	cout << "Digite o CPF do Morador: ";
	getline(cin,op_morador);
	return op_morador;
}

void editarMorador() {
	int op_alterar;
	bool encontrado = false;
	
	cout << "Editar Dados do Morador: \n";
	buscarMorador();
	for (size_t i = 0; i < moradores.size(); ++i) {
        if (op_morador == moradores[i].cpf) {
			cout << "O que deseja auterar? \n";
			cout << "1 - Nome\n";
			cout << "2 - CPF\n";
			cout << "3 - data_nasc";
 	        cout << "4 - Endereco\n";
    		cout << "5 - Sexo\n";
  	 	    cout << "6 - Telefone\n";
     	 	cout << "7 - E-mail\n";
     	 	cout << "8 - Tipo\n";
     	 	cin >> op_alterar;
     	 	switch(op_alterar)
			{
			case 1:
  	        	cin.ignore();
   				cout << "Digite o Novo Nome "; getline(cin, moradores[i].nome);
	  	    	break;
	  	    case 2:
   	   	   	   cin.ignore();
   				cout << "Digite o Novo CPF "; getline(cin, moradores[i].cpf);
	  	    	break;
	  	    case 3:
  	        	cin.ignore();
   				cout << "Digite a Nova Data De Nascimento "; getline(cin, moradores[i].data_nasc);
	  	    	break;
	  	    case 4:
  	        	cin.ignore();
   				cout << "Digite o Novo Endere�o "; getline(cin, moradores[i].endereco);
	  	    	break;
	  	    case 5:
   				cout << "Digite o Novo Sexo (masculino/feminino)"; getline(cin, moradores[i].sexo);
	  	    	break;
	  	    case 6:
  	        	cin.ignore();
   				cout << "Digite o Novo Telefone "; getline(cin, moradores[i].telefone);
	  	    	break;
	  	    case 7:
  	        	cin.ignore();
   				cout << "Digite o Novo E-Mail "; getline(cin, moradores[i].email);
	  	    	break;
	  	    case 8:
  	        	cin.ignore();
   				cout << "Digite o Novo Tipo (proprietario/dependente) "; getline(cin, moradores[i].tipo);
	  	    	break;
	        default:
	        	cout << "op��o Inv�lida\n";
 	  	    	break;
			}
			salvarMoradores();
			encontrado = true;
		} 
	}
	if (!encontrado){
		cout << "Morador n�o Cadastrado\n";
	}
}

void excluirMorador() {
    bool encontrado = false;
    char confirmar;

    cout << "Excluir Morador:\n";
    buscarMorador();  

    for (size_t i = 0; i < moradores.size(); ++i) {
        if (op_morador == moradores[i].cpf) {
            cout << "Deseja Excluir o Morador " << moradores[i].nome << "? (s/n): ";
            cin >> confirmar;

            if (confirmar == 's' || confirmar == 'S') {
                moradores.erase(moradores.begin() + i);
                salvarMoradores();  
                cout << "Morador exclu�do com sucesso!\n";
                encontrado = true;
                break;  
            } else if (confirmar == 'n' || confirmar == 'N') {
                cout << "Opera��o Cancelada!\n";
                encontrado = true;
                break;  
            } else {
                cout << "Valor Inv�lido!\n";
            }
        }
    }

    if (!encontrado) {
        cout << "Morador n�o encontrado!\n";
    }
}

void cadastrarVisitante() {
    TVisitante visitante;
    cout << "Cadastro de Visitantes: \n";
    cin.ignore();
    cout << "Digite o c�digo do visitante: "; getline(cin,visitante.codigo); 
    cout << "Digite o CPF do morador respons�vel: "; getline(cin, visitante.cpf_morador);
    cout << "Digite o CPF do visitante: "; getline(cin, visitante.cpf);
    cout << "Digite o nome do visitante: "; getline(cin, visitante.nome);
    cout << "Digite a data da visita inicial (dd/mm/aaaa): "; getline(cin, visitante.data_visita_inicial);
    cout << "Digite a data da visita final (dd/mm/aaaa): "; getline(cin, visitante.data_visita_final);

    visitantes.push_back(visitante);
    salvarVisitantes();
}

string buscarVisitante () {
	cout << "Buscar Visitante: \n";
	cin.ignore();
	cout << "Digite o CPF do Visitante: ";
	getline(cin,op_visitante);
	return op_visitante;
}

void editarVisitante() {
	int op_alterar;
	bool encontrado = false;
	
	cout << "Editar Dados de Visitantes: \n";
	buscarVisitante();
	
	for (size_t i = 0; i < visitantes.size(); ++i) {
        if (op_visitante == visitantes[i].cpf) {
			cout << "O que deseja auterar? \n";
			cout << "1 - Nome\n";
			cout << "2 - CPF\n";
			cout << "3 - CPF do Morador\n";
 	        cout << "4 - C�digo\n";
    		cout << "5 - Data de Visita Inicial\n";
  	 	    cout << "6 - Data De Visita Final\n";
     	 	cin >> op_alterar;
			switch (op_alterar) {  
			case 1:
  	        	cin.ignore();
   				cout << "Digite o Novo Nome: "; getline(cin, visitantes[i].nome);
	  	    	break;
	  	    case 2:
   	   	   	   cin.ignore();
   				cout << "Digite o Novo CPF: "; getline(cin, visitantes[i].cpf);
	  	    	break;
	  	    case 3:
  	        	cin.ignore();
   				cout << "Digite o Novo CPF Do Morador: "; getline(cin, visitantes[i].cpf_morador);
	  	    	break;
	  	    case 4:
  	        	cin.ignore();
   				cout << "Digite o Novo C�digo: "; getline(cin, visitantes[i].codigo);
	  	    	break;
	  	    case 5:
   				cout << "Digite a Nova Data de Visita Inicial: "; getline(cin, visitantes[i].data_visita_inicial);
	  	    	break;
	  	    case 6:
  	        	cin.ignore();
   				cout << "Digite a Nova Data de Visita Final: "; getline(cin, visitantes[i].data_visita_final);
	  	    	break; 
	  	    default:
	        	cout << "op��o Inv�lida\n";
 	  	    	break;
 	  	    salvarVisitantes();
 	  	    encontrado = true;
			}
		}
	}
	if (!encontrado){
		cout << "Morador n�o Cadastrado\n";
	}	
}

void excluirVisitante () {
	bool encontrado = false;
    char confirmar;

    cout << "Excluir Morador:\n";
    buscarVisitante();  

    for (size_t i = 0; i < visitantes.size(); ++i) {
        if (op_visitante == visitantes[i].cpf) {
            cout << "Deseja Excluir o Morador " << visitantes[i].nome << "? (s/n): ";
            cin >> confirmar;

            if (confirmar == 's' || confirmar == 'S') {
                visitantes.erase(visitantes.begin() + i);
                salvarVisitantes(); 
                cout << "Morador exclu�do com sucesso!\n";
                encontrado = true;
                break;  
            } else if (confirmar == 'n' || confirmar == 'N') {
                cout << "Opera��o Cancelada!\n";
                encontrado = true;
                break;  
            } else {
                cout << "Valor Inv�lido!\n";
            }
        }
    }

    if (!encontrado) {
        cout << "Morador n�o encontrado!\n";
    }
}

void relatorioVisitasPorMorador() {
	bool encontrado = false;
	int cont_visitas=0;
	
	cout << "Relat�rio De Visitas Por Morador\n";
	buscarMorador();
	
	for (size_t i=0; i<visitantes.size(); i++) {
		if (visitantes[i].cpf_morador == op_morador) {
			cout << "-----------------------\n";
			cout << "C�digo do Visitante: "<< visitantes[i].codigo
                 << ", Nome: " << visitantes[i].nome
                 << ", Data In�cio: " << visitantes[i].data_visita_inicial
                 << ", Data Final: " << visitantes[i].data_visita_final << endl;
            cont_visitas++;
            encontrado = true;
			cout << "-----------------------\n";
		}
	}
	cout << "O Morador Teve um N�mero de Visitantes Totais de: " << cont_visitas << endl;
	if (!encontrado){
		cout << "O Morador n�o Recebeu Visitas Ou N�o Est� Cadastrado!\n";
	}	
}

int main () {
    setlocale(LC_ALL,"portuguese");
    int op;
    
    carregarMoradores();
    carregarVisitantes();
    
    do {
        cout << "--------------------------\n";
        cout << "Condominio de Pobre\n";
        cout << "Menu:\n";
        cout << "1 - Cadastrar Morador\n";
        cout << "2 - Editar Dados de Morador\n";
        cout << "3 - Excluir Morador\n";
        cout << "4 - Cadastrar Visitante\n";
        cout << "5 - Editar Dados de Visitas Por Morador\n";
        cout << "6 - Excluir Visitante\n";
        cout << "7 - Relat�rio de Visitas\n";
        cout << "0 - Sair\n";
        cin >> op;
        cout << "--------------------------\n";

        switch (op)
        {
        case 1:
            cadastrarMorador();
            break;
        case 2:
            editarMorador();
            break;
        case 3:
            excluirMorador();
            break;
        case 4: 
            cadastrarVisitante();
            break;
        case 5:
            editarVisitante();
            break;
        case 6:
            excluirVisitante();
            break;
        case 7: 
        	relatorioVisitasPorMorador();
        	break;
        case 0:
            cout << "Finalizando Programa...\n";
            break;
        default:
            cout << "Op��o Inv�lida!\n";
            break;
        }
    }while (op!=0);
    return 0;
}