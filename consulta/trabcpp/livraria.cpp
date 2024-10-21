#include <iostream>  // biblioteca padr�o para entrada e sa�da de dados
#include <locale>    // biblioteca para manipula��o de configura��es regionais e formata��o de dados
#include <windows.h> // biblioteca necess�ria para acessar fun��es da API do Windows.

void setColor(int textColor, int backgroundColor) { // par�metro textColor define a cor do texto e backgroundColor define a cor de fundo
    
	//HANDLE: "identificador" usado para acessar a tela do CMD
	//GetStdHandle(STD_OUTPUT_HANDLE): pede ao sistema a "chave" para acessar a �rea onde o texto � exibido no CMD
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // armazena a "chave" na vari�vel hConsole, usada para alterar o texto no CMD
	
    //o isbn da cor do fundo � movido 4 posi��es para a esquerda porque � o quarto bit�de�um�byte
	SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor); // fun��o usa SetConsoleTextAttribute para alterar a cor do texto e do fundo.
}

using namespace std; // usar o namespace padr�o para simplificar o uso de comandos como cout e cin, evitando o uso de std::

int main() { 
	int textColor = 6;       // Preto
	int backgroundColor = 1; // Vermelho

    setlocale(LC_ALL, "portuguese"); // configura o locale do programa para portugu�s

    // arrays para armazenar as informa��es dos livros
    string titulos[100];     // array para armazenar os t�tulos
    long long int isbn[100]; // array para armazenar os isbns
    string sinopse[100];     // array para armazenar as sinopses
    float precos[100];       // array para armazenar os pre�os
    int quantidades[100];    // array para armazenar as quantidades em estoque
    int totalLivros = 0;     // contador para o n�mero total de livros cadastrados

    int opcao; // vari�vel para armazenar a op��o escolhida pelo usu�rio no menu

    do{ // la�o de repeti��o - fa�a...enquanto = do...while
		system("color�1f"); // n�mero - cor do�fundo e letra - cor da letra
        
		cout<<"\n\t       |LIVRARIA|";
		cout<<"\n\t  |ESTANTE DOS SONHOS|\n";

        cout<<"\n\t ==|GEST�O DE LIVROS|==\n";
        cout<<"\t------------------------\n";
        // exibe o menu de op��es
        cout<<"\t| Menu de Op��es:      |\n";
        cout<<"\t| 1 - Cadastrar livro  |\n";
        cout<<"\t| 2 - Pesquisar livro  |\n";
        cout<<"\t| 3 - Alterar livro    |\n";
        cout<<"\t| 4 - Excluir livro    |\n";
        cout<<"\t| 5 - Sair             |\n";
        cout<<"\t------------------------\n";
        cout<<"\t| Op��o escolhida: "; cin >> opcao; // l� a op��o escolhida pelo usu�rio

        if(opcao == 1){
            cout<<"\n\t   ==|CADASTRO DO LIVRO|==\n";
            
			cout<<"\t----------------------------\n";
            
            // Adicionando a valida��o do ISBN
            long long int novoIsbn; // vari�vel tempor�ria para armazenar o ISBN a ser cadastrado
            bool isbnDuplicado = false;

            do{
                cout<<"\t|ISBN: "; cin>>novoIsbn; // l� o ISBN do livro e armazena temporariamente
                cout<<"\t----------------------------\n";
                isbnDuplicado = false;

                // Verifica se o ISBN j� foi cadastrado
                for (int i = 0; i < totalLivros; i++) {
                    if (isbn[i] == novoIsbn) {
                        isbnDuplicado = true;
                        setColor(textColor, backgroundColor);
                        cout<<"\t---------------------------------------";
                        cout<<"\n\t|ISBN j� cadastrado. Tente novamente.\n";
                        cout<<"\t---------------------------------------\n";
                        break;
                    }
                }
            }while(isbnDuplicado); // repete enquanto o ISBN for duplicado

            isbn[totalLivros] = novoIsbn; // armazena o ISBN validado no array

            cout<<"\t|T�tulo do livro: ";
            cin.ignore();                       // limpa o buffer do teclado para evitar problemas com a leitura da string
            getline(cin, titulos[totalLivros]); // l� o t�tulo do livro e armazena no array 'titulos'
            cout<<"\t----------------------------\n";

            cout<<"\t|Sinopse: "; cin.ignore();  // limpa o buffer do teclado
            getline(cin, sinopse[totalLivros]); // l� a sinopse do livro e armazena no array 'sinopse'
			cout<<"\t----------------------------\n";
			
            cout<<"\t|Pre�o: "; cin>>precos[totalLivros]; // l� o pre�o do livro e armazena no array 'precos'
			cout<<"\t----------------------------\n";
			
            cout<<"\t|Quantidade em Estoque: "; cin>>quantidades[totalLivros]; // l� a quantidade em estoque do livro e armazena no array 'quantidades'
			cout<<"\t----------------------------\n";
			
            totalLivros++; // incrementa o contador de livros

			setColor(textColor,backgroundColor);
			cout<<"\t--------------------------------";
            cout<<"\n\t|Livro cadastrado com sucesso!\n"; // mensagem de confirma��o
            cout<<"\t---------------------------------\n";
            Sleep(1000);
            system("cls"); // limpa a tela do console

        }else if(opcao == 2){
            cout<<"\n\t  ==|PESQUISA DE LIVROS|==\n";

            int escolhaPesquisa; // vari�vel para armazenar a escolha de pesquisa do usu�rio
            cout<<"\t----------------------------\n";
            cout<<"\t| 1 - Pesquisar por t�tulo |\n";
            cout<<"\t| 2 - Pesquisar por ISBN   |\n";
            cout<<"\t----------------------------\n";
            cout<<"\t| Escolha uma forma de pesquisa: "; cin>>escolhaPesquisa; // l� a escolha de pesquisa do usu�rio
            cout<<"\t--------------------------------\n";

            if(escolhaPesquisa == 1){

                // pesquisa por t�tulo
                string tituloPesquisa; // vari�vel para armazenar o t�tulo a ser pesquisado
                cout<<"\t|Digite o t�tulo do livro: ";
                cin.ignore();                 // limpa o buffer do teclado
                getline(cin, tituloPesquisa); // l� o t�tulo a ser pesquisado

                bool encontrado = false; // vari�vel para indicar se o livro foi encontrado

                // itera sobre os livros para encontrar o nome pesquisado
                for(int i = 0; i < totalLivros; i++){
                    if(titulos[i] == tituloPesquisa){ // verifica se o t�tulo do livro no array � igual ao pesquisado
                        encontrado = true;
                    	cout<<"\t----------------------------\n";
                        // exibe as informa��es do livro encontrado
                        cout<<"\n\t|LIVRO ENCONTRADO: " << titulos[i] << "\n\t|ISBN: " << isbn[i] << "\n\t|Sinopse: "
                            << sinopse[i] << "\n\t|Pre�o: R$" << precos[i] << "\n\t|Quantidade: " << quantidades[i] << "\n";
                        break; // Encerra o loop se o livro for encontrado
                    }
                }
                if(!encontrado){
                	setColor(textColor,backgroundColor);
                	cout<<"\t----------------------------";
                    cout<<"\n\t|Livro n�o encontrado.\n";
                    cout<<"\t----------------------------\n";
                    Sleep(1000);
                }
            }else if(escolhaPesquisa == 2){

                // pesquisa por isbn
                long long int isbnPesquisa; // vari�vel para armazenar o isbn a ser pesquisado
                cout<<"\tDigite o ISBN do livro: "; cin>>isbnPesquisa; // l� o isbn a ser pesquisado

                bool encontrado = false; // vari�vel para indicar se o livro foi encontrado

                // itera sobre os livros para encontrar o isbn pesquisado
                for(int i = 0; i < totalLivros; i++){
                    if(isbn[i] == isbnPesquisa){ // verifica se o isbn do livro no array � igual ao pesquisado
                        encontrado = true;
                    	cout<<"\t----------------------------\n";
                        // exibe as informa��es do livro encontrado
                        cout<<"\n\tLivro encontrado: " << titulos[i] << "\n\tISBN: " << isbn[i] << "\n\tSinopse: "
                            << sinopse[i] << "\n\tPre�o: R$" << precos[i] << "\n\tQuantidade: " << quantidades[i] << "\n";
                        break; // Encerra o loop se o livro for encontrado
                    }
                }
                if(!encontrado){
                	setColor(textColor,backgroundColor);
                	cout<<"\t----------------------------";
                    cout<<"\n\t|Livro n�o encontrado.\n";
                    cout<<"\t----------------------------\n";
                	Sleep(1000);
                	system("cls"); // limpa a tela do console
				}
            }
        }else if(opcao == 3){
		    cout<<"\n\t         ==|ALTERA��O DE LIVROS|==\n";
		
		    long long int isbnAlteracao; // vari�vel para armazenar o ISBN do livro a ser alterado
		    cout<<"\t------------------------------------------\n";
		    cout<<"\tDigite o ISBN do livro para ser alterado: "; cin>>isbnAlteracao; // l� o ISBN a ser alterado
		
		    bool encontrado = false; // vari�vel para indicar se o livro foi encontrado
		
		    for(int i = 0; i < totalLivros; i++){
		        if(isbn[i] == isbnAlteracao){ // verifica se o ISBN do livro no array � igual ao informado
		            encontrado = true;
		            cout<<"\t----------------------------\n";
		            cout<<"\tLivro encontrado: " << titulos[i] << "\n\tISBN: " << isbn[i] << "\n\tSinopse: "
		                << sinopse[i] << "\n\tPre�o: R$" << precos[i] << "\n\tQuantidade: " << quantidades[i] << "\n";
		
		            // permite ao usu�rio alterar as informa��es do livro
		            cout<<"\tDigite as novas informa��es:\n";
		            cout<<"\tT�tulo: ";
		            cin.ignore();                 // limpa o buffer do teclado
		            getline(cin, titulos[i]);     // l� o novo t�tulo
		            cout<<"\tSinopse: ";
		            getline(cin, sinopse[i]);     // l� a nova sinopse
		            cout<<"\tPre�o: "; cin>>precos[i];          // l� o novo pre�o
		            cout<<"\tQuantidade: "; cin>>quantidades[i]; // l� a nova quantidade
		            
					setColor(textColor,backgroundColor);
					cout<<"\t----------------------------\n";
		            cout<<"\n\t|Livro alterado com sucesso!\n"; // mensagem de confirma��o
		            cout<<"\t----------------------------\n";
		            Sleep(1000);
		            break;
		        }
		    }
		    if(!encontrado){
				setColor(textColor,backgroundColor);
		    	cout<<"\t----------------------------";
		        cout<<"\n\t|Livro n�o encontrado.\n";
		        cout<<"\t----------------------------\n";
		    	Sleep(1000);
		    	system("cls"); // limpa a tela do console
		    }
		}else if(opcao == 4){
		    cout<<"\n\t       ==|EXCLUS�O DE LIVROS|==\n";
		    
			long long int isbnExclusao; // vari�vel para armazenar o ISBN do livro a ser exclu�do
			cout<<"\t--------------------------------------\n";
		    cout<<"\tDigite o ISBN do livro a ser exclu�do: "; cin>>isbnExclusao; // l� o ISBN a ser exclu�do
		
		    bool encontrado = false; // vari�vel para indicar se o livro foi encontrado
		
		    for(int i = 0; i < totalLivros; i++){
		        if(isbn[i] == isbnExclusao){ // verifica se o ISBN do livro no array � igual ao informado
		            encontrado = true;
		            cout<<"\t----------------------------\n";
		            cout<<"\n\tLivro encontrado: " << titulos[i] << "\n\tISBN: " << isbn[i] << "\n\tSinopse: "
		                << sinopse[i] << "\n\tPre�o: R$" << precos[i] << "\n\tQuantidade: " << quantidades[i] << "\n";
		
		            // exclui o livro movendo os elementos subsequentes para a esquerda
		            for(int j = i; j < totalLivros - 1; j++){
		                titulos[j] = titulos[j+1];
		                isbn[j] = isbn[j+1];
		                sinopse[j] = sinopse[j+1];
		                precos[j] = precos[j+1];
		                quantidades[j] = quantidades[j+1];
		            }
		            totalLivros--; // decrementa o contador de livros
		            cout<<"\t----------------------------\n";
					setColor(textColor,backgroundColor);
		            cout<<"\n\t|Livro exclu�do com sucesso!\n";
		            cout<<"\t----------------------------\n";
		            Sleep(1000);
		            system("cls"); // limpa a tela do console
		            break;
		        }
		    }
		    if(!encontrado){
				setColor(textColor,backgroundColor);
		    	cout<<"\t----------------------------";
		        cout<<"\n\t|Livro n�o encontrado.\n";
		        cout<<"\t----------------------------\n";
		    	Sleep(1000);
		    	system("cls"); // limpa a tela do console
		    }
		}else if(opcao == 5){
		    cout<<"\n\t|Encerrando o programa...\n";
		    Sleep(1000);
		    system("cls"); // limpa a tela do console
		}else{
		    cout<<"\n\t|Op��o inv�lida. Tente novamente.\n";
		    Sleep(1000);
		}
    }while(opcao != 5);
	return 0;
}