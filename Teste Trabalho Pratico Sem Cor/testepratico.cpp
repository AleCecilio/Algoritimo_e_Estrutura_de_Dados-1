#include <iostream>
#include <locale>


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
	string pesquisa;                    /*pesquisa do úsuario*/
	int x=1, op, op_pesquisa, op_alt;   /*auxiliar referente as posições do vetor, opção pesquisa e opção alteração*/
	bool prod_n_cad;                    /*produtos não cadastrados*/
	char exps;                          /*excluir produtos*/
	do 
	{
		 /* Menu de opções */
		cout << "\n------------++++++------------\n";
		cout << "\n       MENU DE OPÇÕES:\n" ;
		cout << "1 " << "- Cadastrar Produto/Serviço\n" ;
		cout << "2 - Pesquisa Produto/Serviço\n" ;
		cout << "3 - Alterar Produto/Serviço\n" ;
		cout << "4 - Excluir Produto/Serviço\n" ;
		cout << "5 - Sair\n" ;
		cout << "> "; 
		cin >> op;
		cout << "------------++++++------------\n";
		cout << endl;
		
		
		switch(op)
		{
		case 1: 
			  /* Cadastro de Produto/Serviço */
			cout << "CADASTRO DE PRODUTO/SERVIÇO\n" ;
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
				cout <<"\nMÉMORIA CHEIA\n" ;
			}
			break;
		
		
		case 2:
			 /* Pesquisa de Produto/Serviço */
			cout << "PESQUISA POR PRODUTO/SERVIÇO:\n";
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por Código\n";
			cout << "> "; 
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
						cout << "------------------------------\n";
					   	cout << "Código do Produto/Serviço: " << prods[n].codigo <<endl;
						cout << "Descrição: " << prods[n].desc <<endl;
						cout << "Preço R$: " << prods[n].preco <<endl;
						cout << "Quantidade em Estoque: " << prods[n].quant_est <<endl;
						cout << "------------------------------\n";
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
				   	cout << "\nPRODUTO/SERVIÇO NÃO CADASTRADO\n";	
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
						cout << "------------------------------\n";
				   		cout << "Nome do Produto/Serviço: " << prods[c].nome <<endl;
						cout << "Descrição: " << prods[c].desc  <<endl;
						cout << "Preço R$: " << prods[c].preco  <<endl;
						cout << "Quantidade em Estoque: " << prods[c].quant_est  <<endl;
						cout << "------------------------------\n" ;
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
					cout << "\nPRODUTO/SERVIÇO NÃO CADASTRADO\n" ;	
					cout << endl;
				}	
			
   	        }
			   
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << "OPÇÃO DE PESQUISA INVÁLIDA!\n";
				prod_n_cad = true;
			}
			break;	
		
		
		case 3:
			 /* Alteração de Produto/Serviço */
			cout << "ALTERAR PRODUTO/SERVIÇO\n";
			cout << "Pesquise o  produto/serviço que deja alterar\n";
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por Código\n";
			cout << "> "; 
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
							cout << "------------------------------\n" ;
							cout <<  "Situação Atual do Campo:\n";
							cout << "Nome: "<< prods[n].nome <<endl;
							cout << "------------------------------\n";
							cout <<endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Serviço: "; getline(cin,prods[n].nome);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 2:
							cout << "------------------------------\n" ;
							cout <<  "Situação Atual do Campo:\n" ;
							cout << "Código: "<< prods[n].codigo <<endl;
							cout << "------------------------------\n";
							cout <<endl;
							cin.ignore();
							cout << "Novo Código do Produto/Serviço: "; getline(cin,prods[n].codigo);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 3:
							cout << "------------------------------\n" ;
							cout <<  "Situação Atual do Campo:\n" ;
							cout << "Descrição: "<< prods[n].desc <<endl;
							cout << "------------------------------\n";
							cout <<endl;
							cin.ignore();
							cout << "Nova Descrição: "; getline(cin,prods[n].desc);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 4:
							cout << "------------------------------\n";
							cout <<  "Situação Atual do Campo:\n";
							cout << "Preço R$: "<< prods[n].preco <<endl;
							cout << "------------------------------\n";
							cout <<endl;
							cin.ignore();
							cout << "Novo Preço R$ (X.XX): "; getline(cin,prods[n].preco);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 5:
							cout << "------------------------------\n" ;
							cout <<  "Situação Atual do Campo:\n" ;
							cout << "Quantidade em Estoque: "<< prods[n].quant_est <<endl;
							cout << "------------------------------\n";
							cout <<endl;
							cin.ignore();
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[n].quant_est);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 6:
							cout << "------------------------------\n" ;
							cout <<  "Situação Atual do Campos:\n" ;
							cout << "Nome: "<< prods[n].nome <<endl;
							cout << "Código: "<< prods[n].codigo <<endl;
							cout << "Descrição: "<< prods[n].desc <<endl;
							cout << "Preço R$: "<< prods[n].preco  <<endl;
							cout << "Quantidade em Estoque: "<< prods[n].quant_est <<endl;
							cout << "------------------------------\n";
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
							cout << "\nOPÇÃO INVÁLIDA\n";
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
				   	cout << "\nPRODUTO/SERVIÇO NÃO CADASTRADO\n";			
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
							cout << "------------------------------\n" ;
							cout <<  "Situação Atual do Campo:\n" ;
							cout << "Nome: "<< prods[c].nome <<endl;
							cout << "------------------------------\n";
							cout << endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Serviço: "; getline(cin,prods[c].nome);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 2:
						    cout << "------------------------------\n";
							cout <<  "Situação Atual do Campo:\n" ;
							cout << "Código: "<< prods[c].codigo  <<endl;
							cout << "------------------------------\n";
							cout << endl;
							cin.ignore();
							cout << "Novo Código do Produto/Serviço: "; getline(cin,prods[c].codigo);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 3:
							cout << "------------------------------\n";
							cout <<  "Situação Atual do Campo:\n";
							cout << "Descrição: "<< prods[c].desc <<endl;
							cout << "------------------------------\n";
							cout << endl;
							cin.ignore();
							cout << "Nova Descrição: "; getline(cin,prods[c].desc);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 4:
							cout << "------------------------------\n";
							cout <<  "Situação Atual do Campo:\n";
							cout << "Preço R$: "<< prods[c].preco  <<endl;
							cout << "------------------------------\n";
							cout << endl;
							cin.ignore();
							cout << "Novo Preço R$ (X.XX): "; getline(cin,prods[c].preco);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 5:
							cout << "------------------------------\n";
							cout <<  "Situação Atual do Campo:\n";
							cout << "Quantidade em Estoque: "<< prods[c].quant_est <<endl;
							cout << "------------------------------\n";
							cout << endl;
							cin.ignore();
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[c].quant_est);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 6:
							cout << "------------------------------\n";
							cout <<  "Situação Atual do Campo:\n";
							cout << "Nome: "<< prods[c].nome <<endl;
							cout << "Código: "<< prods[c].codigo <<endl;
							cout << "Descrição: "<< prods[c].desc <<endl;
							cout << "Preço R$: "<< prods[c].preco <<endl;
							cout << "Quantidade em Estoque: "<< prods[c].quant_est <<endl;
							cout << "------------------------------\n";
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
							cout << "\nOPÇÃO INVÁLIDA\n";
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
				   	cout << "\nPRODUTO/SERVIÇO NÃO CADASTRADO\n";	
					cout << endl;
				}
			}
			
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << "OPÇÃO DE PESQUISA INVÁLIDA!\n";
				prod_n_cad = true;
			}

			break;
		
		
		case 4:
			/* Exclusão de Produto/Serviço */
			cout << "EXCLUIR PRODUTOS/SERVIÇOS\n";
			cout << "Pesquise o produto/serviço que deseja excluir:\n";
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por Código\n";
			cout << "> "; 
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
						cout << "------------------------------\n" ;
						cout << "Situação Atual dos Campos:\n";
						cout << "Nome: "<< prods[n].nome <<endl;
						cout << "Código: "<< prods[n].codigo <<endl;
						cout << "Descrição: "<< prods[n].desc <<endl;
						cout << "Preço R$: "<< prods[n].preco <<endl;
						cout << "Quantidade em Estoque: "<< prods[n].quant_est <<endl;
						cout << "------------------------------\n";
						cout <<endl;
						
						cout << "ATENÇÃO!!!\n";
						cout << "Deseja excluir o Produto/Serviço?(S/N) "; 
						cin >> exps;
						if (toupper(exps)=='S') 
						{
							prods[n].nome = "";
							prods[n].codigo = "";
							prods[n].desc = "";
							prods[n].preco = "";
							prods[n].quant_est = "";
							cout << "\nPRODUTO/SERVIÇO EXCLUÍDO!!!\n" ;
							prod_n_cad = true;
							break;
						}
						else 
						{
							cout << "\nVoltando ao Menu...\n";
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
				   	cout << "\nProduto/Serviço não cadastrado\n";	
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
                        cout << "------------------------------\n";
						cout << "Situação Atual dos Campos:\n";
						cout << "Nome: "<< prods[c].nome <<endl;
						cout << "Código: "<< prods[c].codigo <<endl;
						cout << "Descrição: "<< prods[c].desc <<endl;
						cout << "Preço R$: "<< prods[c].preco <<endl;
						cout << "Quantidade em Estoque: "<< prods[c].quant_est <<endl;
						cout << "------------------------------\n" ;
						cout <<endl;
						cout << "ATENÇÃO!!!\n";
						cout << "Deseja excluir o Produto/Serviço?(S/N) "; 
						cin >> exps;
						if (toupper(exps)=='S') 
						{
							prods[c].nome = "";
							prods[c].codigo = "";
							prods[c].desc = "";
							prods[c].preco = "";
							prods[c].quant_est = "";
							cout << "\nPRODUTO/SERVIÇO EXCLUÍDO!!!\n";
							prod_n_cad = true;
							break;
						}
						else 
						{
							cout << "\nVoltando ao Menu...\n";
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
					cout << "\nPRODUTO/SERVIÇO NÃO CADASTRADO\n";	
					cout << endl;
				}
			}
			
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << "OPÇÃO DE PESQUISA INVÁLIDA!\n";
				prod_n_cad = true;
			}
			break;
		
		case 5:
			/* Sair do programa */
			cout << "\n----------------------------------------\n";
    		cout << "Muito obrigado por utilizar o sistema!\n";
    		cout << "           Até a próxima.\n";
    		cout << "----------------------------------------\n";
    		cout << "         Encerrando programa...\n" ;
    		cout << "----------------------------------------\n" ;
			
			break;
		
		default:
			cout << "\nOPÇÃO INVÁLIDA\n" ;
			break;
		}
		
	}while(op!=5);
	
	
	return 0;
}