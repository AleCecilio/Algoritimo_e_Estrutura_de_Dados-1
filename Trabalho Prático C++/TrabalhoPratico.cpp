#include <iostream>
#include <locale>

/*Cores*/
#define RESET         "\033[0m"
#define RED           "\033[31m"
#define CYAN          "\033[36m"
#define LIGHT_GREEN   "\033[92m"
#define LIGHT_CYAN    "\033[96m"
#define LIGHT_RED     "\033[91m"
#define WHITE   	  "\033[97m" 

using namespace std;

/*Estrutura das Variaveis dos Produtos/Serviços*/
struct TProduto 
{
	string nome, codigo, desc, preco, quant_est;
};

int main()
{
	setlocale (LC_ALL,"portuguese");
	
	/* Declaração de variáveis */
	TProduto prods[1000];
	string pesquisa;                  /*pesquisa do úsuario*/
	int x=1, op, op_pesquisa, op_alt; /*auxiliar referente as posições no vetor, opção de  pesquisa e opção de alteração*/
	bool prod_n_cad;                  /*produtos não cadastrados*/
	char exps;                        /*excluir produtos*/
	do {
		 /* Menu de opções */
		cout << CYAN << "\n------------++++++------------\n" << RESET;
		cout << CYAN << "\n       MENU DE OPÇÕES:\n" << RESET ;
		cout << "1 " << "- Cadastrar Produto/Serviço\n" ;
		cout << "2 - Pesquisa Produto/Serviço\n" ;
		cout << "3 - Alterar Produto/Serviço\n" ;
		cout << "4 - Excluir Produto/Serviço\n" ;
		cout << "5 - Sair\n" ;
		cout << CYAN << "> " << RESET; 
		cin >> op;
		cout << CYAN << "------------++++++------------\n" << RESET;
		cout << endl;
		
		
		switch(op)
		{
		case 1: 
			  /* Cadastro de Produto/Serviço */
			cout << LIGHT_CYAN << "CADASTRO DE PRODUTO/SERVIÇO\n" << RESET;
			if (x<=999)
			{
				cin.ignore();
				cout << "Nome do Produto/Serviço: "; getline(cin,prods[x].nome);
				cout << "Código do Produto/Serviço: "; getline(cin,prods[x].codigo);
				cout << "Descrição: "; getline(cin,prods[x].desc);
				cout << "Preço (X.XX) R$: "; getline(cin,prods[x].preco);
				cout << "Quantidade em Estoque: "; getline(cin,prods[x].quant_est);
				x+=1;
			}
			else 
			{
				cout << RED <<"\nMÉMORIA CHEIA\n" << RESET;
			}
			break;
		
		
		case 2:
			 /* Pesquisa de Produto/Serviço */
			cout << LIGHT_CYAN << "PESQUISA POR PRODUTO/SERVIÇO:\n" << RESET;
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por Código\n";
			cout << LIGHT_CYAN << "> " << RESET; 
			cin >> op_pesquisa;
			cout << endl;
			
			if (op_pesquisa==1)
			{
				cin.ignore();
				cout << "Digite o Nome do Produto/Serviço: "; getline(cin,pesquisa);
				cout << endl;
				for(int n=0; n <x; n++)
				{
					if (pesquisa==prods[n].nome)
					{
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
					   	cout << WHITE << "Código do Produto/Serviço: " << prods[n].codigo << RESET <<endl;
						cout << WHITE << "Descrição: " << prods[n].desc  << RESET <<endl;
						cout << WHITE << "Preço R$: " << prods[n].preco  << RESET <<endl;
						cout << WHITE << "Quantidade em Estoque: " << prods[n].quant_est  << RESET <<endl;
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout << endl;
						prod_n_cad = true;
						break;
					}
					else 
					{
					   	prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
				   	cout << RED << "\nPRODUTO/SERVIÇO NÃO CADASTRADO\n" << RESET;	
					cout << endl;
				}
			}

			if (op_pesquisa==2)
   	        {	
			   	cin.ignore();
				cout << "Digite o Código do Produto/Serviço: "; getline(cin,pesquisa);
				cout << endl;
				for(int c=0; c <x; c++)
				{
					if (pesquisa==prods[c].codigo)
					{
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
				   		cout << WHITE << "Nome do Produto/Serviço: " << prods[c].nome << RESET <<endl;
						cout << WHITE << "Descrição: " << prods[c].desc  << RESET <<endl;
						cout << WHITE << "Preço R$: " << prods[c].preco  << RESET <<endl;
						cout << WHITE << "Quantidade em Estoque: " << prods[c].quant_est  << RESET <<endl;
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout << endl;
						prod_n_cad = true;
						break;
					}
					else 
					{
				   		prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
					cout << RED << "\nPRODUTO/SERVIÇO NÃO CADASTRADO\n" << RESET;	
					cout << endl;
				}	
			
   	        }
			   
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << RED << "OPÇÃO DE PESQUISA INVÁLIDA!\n" << RESET;
				prod_n_cad = true;
			}
			break;	
		
		
		case 3:
			 /* Alteração de Produto/Serviço */
			cout << LIGHT_CYAN << "ALTERAR PRODUTO/SERVIÇO\n" << RESET;
			cout << "Pesquise o  produto/serviço que deja alterar\n";
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por Código\n";
			cout << LIGHT_CYAN  << "> " << RESET; 
			cin >> op_pesquisa;
			cout << endl;
			
			if (op_pesquisa==1)
			{
				cin.ignore();
				cout << "Digite o Nome do Produto/Serviço: "; getline(cin,pesquisa);
				cout << endl;
				for(int n=0; n <x; n++)
				{
					if (pesquisa==prods[n].nome)
					{
						cout << "O que deseja alterar\n";
						cout << "1 - Nome\n";
						cout << "2 - Código\n";
						cout << "3 - Descrição\n";
						cout << "4 - Preço\n";
						cout << "5 - Quantidade em Estoque\n";
						cout << "6 - Todos os Campos\n";
						cout << "> "; 
						cin >> op_alt;
						switch(op_alt)
						{
						case 1:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE<< "Nome: "<< prods[n].nome  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Serviço: "; getline(cin,prods[n].nome);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 2:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE << "Código: "<< prods[n].codigo  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Novo Código do Produto/Serviço: "; getline(cin,prods[n].codigo);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 3:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE << "Descrição: "<< prods[n].desc  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Nova Descrição: "; getline(cin,prods[n].desc);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 4:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE << "Preço R$: "<< prods[n].preco  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Novo Preço R$ (X.XX): "; getline(cin,prods[n].preco);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 5:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE << "Quantidade em Estoque: "<< prods[n].quant_est  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[n].quant_est);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 6:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campos:\n" << RESET;
							cout << WHITE << "Nome: "<< prods[n].nome  << RESET <<endl;
							cout << WHITE << "Código: "<< prods[n].codigo  << RESET <<endl;
							cout << WHITE << "Descrição: "<< prods[n].desc  << RESET <<endl;
							cout << WHITE << "Preço R$: "<< prods[n].preco  << RESET<<endl;
							cout << WHITE << "Quantidade em Estoque: "<< prods[n].quant_est  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Serviço: "; getline(cin,prods[n].nome);
							cout << "Novo Código do Produto/Serviço: "; getline(cin,prods[n].codigo);
							cout << "Nova Descrição: "; getline(cin,prods[n].desc);
							cout << "Novo Preço: "; getline(cin,prods[n].preco);
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[n].quant_est);
							cout << "CAMPOS ALTERADOS!!\n";
							break;
						default:
							cout << RED << "\nOPÇÃO INVÁLIDA\n" << RESET;
							break;
						}
						prod_n_cad = true;
						break;
						
					}
					else 
					{
					   	prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
				   	cout << RED << "\nPRODUTO/SERVIÇO NÃO CADASTRADO\n" << RESET;			
					cout << endl;
				}
			}
				
				
			if (op_pesquisa==2)
			{
				cin.ignore();
				cout << "Digite o Código do Produto/Serviço: "; getline(cin,pesquisa);
				cout << endl;
				for(int c=0; c <x; c++)
				{
					if (pesquisa==prods[c].codigo)
					{
						cout << "O que deseja alterar\n";
						cout << "1 - Nome\n";
						cout << "2 - Código\n";
						cout << "3 - Descrição\n";
						cout << "4 - Preço\n";
						cout << "5 - Quantidade em Estoque\n";
						cout << "6 - Todos os Campos\n";
						cout << "> "; 
						cin >> op_alt;
						switch(op_alt)
						{
						case 1:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE << "Nome: "<< prods[c].nome  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Serviço: "; getline(cin,prods[c].nome);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 2:
						    cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE << "Código: "<< prods[c].codigo  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << endl;
							cin.ignore();
							cout << "Novo Código do Produto/Serviço: "; getline(cin,prods[c].codigo);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 3:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE << "Descrição: "<< prods[c].desc  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << endl;
							cin.ignore();
							cout << "Nova Descrição: "; getline(cin,prods[c].desc);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 4:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE << "Preço R$: "<< prods[c].preco  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << endl;
							cin.ignore();
							cout << "Novo Preço R$ (X.XX): "; getline(cin,prods[c].preco);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 5:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE << "Quantidade em Estoque: "<< prods[c].quant_est  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << endl;
							cin.ignore();
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[c].quant_est);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 6:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situação Atual do Campo:\n" << RESET;
							cout << WHITE << "Nome: "<< prods[c].nome  << RESET <<endl;
							cout << WHITE << "Código: "<< prods[c].codigo  << RESET <<endl;
							cout << WHITE << "Descrição: "<< prods[c].desc  << RESET <<endl;
							cout << WHITE << "Preço R$: "<< prods[c].preco  << RESET <<endl;
							cout << WHITE << "Quantidade em Estoque: "<< prods[c].quant_est  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Serviço: "; getline(cin,prods[c].nome);
							cout << "Novo Código do Produto/Serviço: "; getline(cin,prods[c].codigo);
							cout << "Nova Descrição: "; getline(cin,prods[c].desc);
							cout << "Novo Preço R$ (X.XX): "; getline(cin,prods[c].preco);
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[c].quant_est);
							cout << "CAMPOS ALTERADOS!\n";
							break;
						default:
							cout << RED << "\nOPÇÃO INVÁLIDA\n" << RESET;
							break;
						}
						prod_n_cad = true;
						break;
					}
					
					else 
					{
					   	prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
				   	cout << RED << "\nPRODUTO/SERVIÇO NÃO CADASTRADO\n" << RESET;	
					cout << endl;
				}
			}
			
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << RED << "OPÇÃO DE PESQUISA INVÁLIDA!\n" << RESET;
				prod_n_cad = true;
			}

			break;
		
		
		case 4:
			/* Exclusão de Produto/Serviço */
			cout << LIGHT_RED << "EXCLUIR PRODUTOS/SERVIÇOS\n" << RESET;
			cout << "Pesquise o produto/serviço que deseja excluir:\n";
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por Código\n";
			cout << LIGHT_RED << "> " << RESET; 
			cin >> op_pesquisa;
			cout << endl;
			
			if (op_pesquisa==1)
			{
				cin.ignore();
				cout << "Digite o Nome do Produto/Serviço: "; getline(cin,pesquisa);
				cout << endl;
				for(int n=0; n <x; n++)
				{
					if (pesquisa==prods[n].nome) 
					{
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout << WHITE << "Situação Atual dos Campos:\n"  << RESET;
						cout << WHITE << "Nome: "<< prods[n].nome  << RESET <<endl;
						cout << WHITE << "Código: "<< prods[n].codigo  << RESET <<endl;
						cout << WHITE << "Descrição: "<< prods[n].desc  << RESET <<endl;
						cout << WHITE << "Preço R$: "<< prods[n].preco  << RESET <<endl;
						cout << WHITE << "Quantidade em Estoque: "<< prods[n].quant_est  << RESET <<endl;
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout <<endl;
						
						cout << RED << "ATENÇÃO!!!\n" << RESET;
						cout << "Deseja excluir o Produto/Serviço?(S/N) "; 
						cin >> exps;
						if (toupper(exps)=='S') 
						{
							prods[n].nome = "";
							prods[n].codigo = "";
							prods[n].desc = "";
							prods[n].preco = "";
							prods[n].quant_est = "";
							cout << LIGHT_RED<< "\nPRODUTO/SERVIÇO EXCLUÍDO!!!\n" << RESET;
							prod_n_cad = true;
							break;
						}
						else 
						{
							cout << LIGHT_GREEN << "\nVoltando ao Menu...\n" << RESET;
							prod_n_cad = true;
							break;
						}
					}
					else 
					{
						prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
				   	cout << RED << "\nProduto/Serviço não cadastrado\n" << RESET;	
					cout << endl;
				}	
			}
			
			if (op_pesquisa==2)
			{
				cin.ignore();
				cout << "Digite o Código do Produto/Serviço: "; getline(cin,pesquisa);
				cout << endl;
				for(int c=0; c <x; c++)
				{ 	 	
					if (pesquisa==prods[c].codigo) 
					{
                        cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout << "Situação Atual dos Campos:\n";
						cout << "Nome: "<< prods[c].nome <<endl;
						cout << "Código: "<< prods[c].codigo <<endl;
						cout << "Descrição: "<< prods[c].desc <<endl;
						cout << "Preço R$: "<< prods[c].preco <<endl;
						cout << "Quantidade em Estoque: "<< prods[c].quant_est <<endl;
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout <<endl;
						cout << RED << "ATENÇÃO!!!\n" << RESET;
						cout << "Deseja excluir o Produto/Serviço?(S/N) "; 
						cin >> exps;
						if (toupper(exps)=='S') 
						{
							prods[c].nome = "";
							prods[c].codigo = "";
							prods[c].desc = "";
							prods[c].preco = "";
							prods[c].quant_est = "";
							cout << LIGHT_RED<< "\nPRODUTO/SERVIÇO EXCLUÍDO!!!\n" << RESET;
							prod_n_cad = true;
							break;
						}
						else 
						{
							cout << LIGHT_GREEN<< "\nVoltando ao Menu...\n" << RESET;
							prod_n_cad = true;
							break;
						}
					}
					else 
					{
						prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
					cout << RED << "\nPRODUTO/SERVIÇO NÃO CADASTRADO\n" << RESET;	
					cout << endl;
				}
			}
			
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << RED << "OPÇÃO DE PESQUISA INVÁLIDA!\n" << RESET;
				prod_n_cad = true;
			}
			break;
		
		case 5:
			/* Sair do programa */
			cout << LIGHT_CYAN << "\n----------------------------------------\n" << RESET;
    		cout << WHITE  << "Muito obrigado por utilizar o sistema!\n" << RESET;
    		cout << WHITE << "           Até a próxima.\n" << RESET;
    		cout << LIGHT_CYAN << "----------------------------------------\n" << RESET;
    		cout << LIGHT_GREEN<< "         Encerrando programa...\n" << RESET;
    		cout << LIGHT_CYAN << "----------------------------------------\n" << RESET;
			
			break;
		default:
			cout << RED << "\nOPÇÃO INVÁLIDA\n" << RESET;
			break;
		}
		
	}while(op!=5);
	
	
	return 0;
}