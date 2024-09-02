#include <iostream>  // biblioteca padrão para entrada e saída de dados
#include <locale>    // biblioteca para manipulação de configurações regionais e formatação de dados
#include <windows.h> // biblioteca necessária para acessar funções da API do Windows.

void setColor(int textColor, int backgroundColor) { // parâmetro textColor define a cor do texto e backgroundColor define a cor de fundo
    
	//HANDLE: "identificador" usado para acessar a tela do CMD
	//GetStdHandle(STD_OUTPUT_HANDLE): pede ao sistema a "chave" para acessar a área onde o texto é exibido no CMD
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // armazena a "chave" na variável hConsole, usada para alterar o texto no CMD
	
    //o isbn da cor do fundo é movido 4 posições para a esquerda porque é o quarto bit de um byte
	SetConsoleTextAttribute(hConsole, (backgroundColor << 4) | textColor); // função usa SetConsoleTextAttribute para alterar a cor do texto e do fundo.
}

using namespace std; // usar o namespace padrão para simplificar o uso de comandos como cout e cin, evitando o uso de std::

int main() { 
	int textColor = 6;       // Preto
	int backgroundColor = 1; // Vermelho

    setlocale(LC_ALL, "portuguese"); // configura o locale do programa para português

    // arrays para armazenar as informações dos livros
    string titulos[100];     // array para armazenar os títulos
    long long int isbn[100]; // array para armazenar os isbns
    string sinopse[100];     // array para armazenar as sinopses
    float precos[100];       // array para armazenar os preços
    int quantidades[100];    // array para armazenar as quantidades em estoque
    int totalLivros = 0;     // contador para o número total de livros cadastrados

    int opcao; // variável para armazenar a opção escolhida pelo usuário no menu

    do{ // laço de repetição - faça...enquanto = do...while
		system("color 1f"); // número - cor do fundo e letra - cor da letra
        
		cout<<"\n\t       |LIVRARIA|";
		cout<<"\n\t  |ESTANTE DOS SONHOS|\n";

        cout<<"\n\t ==|GESTÃO DE LIVROS|==\n";
        cout<<"\t------------------------\n";
        // exibe o menu de opções
        cout<<"\t| Menu de Opções:      |\n";
        cout<<"\t| 1 - Cadastrar livro  |\n";
        cout<<"\t| 2 - Pesquisar livro  |\n";
        cout<<"\t| 3 - Alterar livro    |\n";
        cout<<"\t| 4 - Excluir livro    |\n";
        cout<<"\t| 5 - Sair             |\n";
        cout<<"\t------------------------\n";
        cout<<"\t| Opção escolhida: "; cin >> opcao; // lê a opção escolhida pelo usuário

        if(opcao == 1){
            cout<<"\n\t   ==|CADASTRO DO LIVRO|==\n";
            
			cout<<"\t----------------------------\n";
            
            // Adicionando a validação do ISBN
            long long int novoIsbn; // variável temporária para armazenar o ISBN a ser cadastrado
            bool isbnDuplicado = false;

            do{
                cout<<"\t|ISBN: "; cin>>novoIsbn; // lê o ISBN do livro e armazena temporariamente
                cout<<"\t----------------------------\n";
                isbnDuplicado = false;

                // Verifica se o ISBN já foi cadastrado
                for (int i = 0; i < totalLivros; i++) {
                    if (isbn[i] == novoIsbn) {
                        isbnDuplicado = true;
                        setColor(textColor, backgroundColor);
                        cout<<"\t---------------------------------------";
                        cout<<"\n\t|ISBN já cadastrado. Tente novamente.\n";
                        cout<<"\t---------------------------------------\n";
                        break;
                    }
                }
            }while(isbnDuplicado); // repete enquanto o ISBN for duplicado

            isbn[totalLivros] = novoIsbn; // armazena o ISBN validado no array

            cout<<"\t|Título do livro: ";
            cin.ignore();                       // limpa o buffer do teclado para evitar problemas com a leitura da string
            getline(cin, titulos[totalLivros]); // lê o título do livro e armazena no array 'titulos'
            cout<<"\t----------------------------\n";

            cout<<"\t|Sinopse: "; cin.ignore();  // limpa o buffer do teclado
            getline(cin, sinopse[totalLivros]); // lê a sinopse do livro e armazena no array 'sinopse'
			cout<<"\t----------------------------\n";
			
            cout<<"\t|Preço: "; cin>>precos[totalLivros]; // lê o preço do livro e armazena no array 'precos'
			cout<<"\t----------------------------\n";
			
            cout<<"\t|Quantidade em Estoque: "; cin>>quantidades[totalLivros]; // lê a quantidade em estoque do livro e armazena no array 'quantidades'
			cout<<"\t----------------------------\n";
			
            totalLivros++; // incrementa o contador de livros

			setColor(textColor,backgroundColor);
			cout<<"\t--------------------------------";
            cout<<"\n\t|Livro cadastrado com sucesso!\n"; // mensagem de confirmação
            cout<<"\t---------------------------------\n";
            Sleep(1000);
            system("cls"); // limpa a tela do console

        }else if(opcao == 2){
            cout<<"\n\t  ==|PESQUISA DE LIVROS|==\n";

            int escolhaPesquisa; // variável para armazenar a escolha de pesquisa do usuário
            cout<<"\t----------------------------\n";
            cout<<"\t| 1 - Pesquisar por título |\n";
            cout<<"\t| 2 - Pesquisar por ISBN   |\n";
            cout<<"\t----------------------------\n";
            cout<<"\t| Escolha uma forma de pesquisa: "; cin>>escolhaPesquisa; // lê a escolha de pesquisa do usuário
            cout<<"\t--------------------------------\n";

            if(escolhaPesquisa == 1){

                // pesquisa por título
                string tituloPesquisa; // variável para armazenar o título a ser pesquisado
                cout<<"\t|Digite o título do livro: ";
                cin.ignore();                 // limpa o buffer do teclado
                getline(cin, tituloPesquisa); // lê o título a ser pesquisado

                bool encontrado = false; // variável para indicar se o livro foi encontrado

                // itera sobre os livros para encontrar o nome pesquisado
                for(int i = 0; i < totalLivros; i++){
                    if(titulos[i] == tituloPesquisa){ // verifica se o título do livro no array é igual ao pesquisado
                        encontrado = true;
                    	cout<<"\t----------------------------\n";
                        // exibe as informações do livro encontrado
                        cout<<"\n\t|LIVRO ENCONTRADO: " << titulos[i] << "\n\t|ISBN: " << isbn[i] << "\n\t|Sinopse: "
                            << sinopse[i] << "\n\t|Preço: R$" << precos[i] << "\n\t|Quantidade: " << quantidades[i] << "\n";
                        break; // Encerra o loop se o livro for encontrado
                    }
                }
                if(!encontrado){
                	setColor(textColor,backgroundColor);
                	cout<<"\t----------------------------";
                    cout<<"\n\t|Livro não encontrado.\n";
                    cout<<"\t----------------------------\n";
                    Sleep(1000);
                }
            }else if(escolhaPesquisa == 2){

                // pesquisa por isbn
                long long int isbnPesquisa; // variável para armazenar o isbn a ser pesquisado
                cout<<"\tDigite o ISBN do livro: "; cin>>isbnPesquisa; // lê o isbn a ser pesquisado

                bool encontrado = false; // variável para indicar se o livro foi encontrado

                // itera sobre os livros para encontrar o isbn pesquisado
                for(int i = 0; i < totalLivros; i++){
                    if(isbn[i] == isbnPesquisa){ // verifica se o isbn do livro no array é igual ao pesquisado
                        encontrado = true;
                    	cout<<"\t----------------------------\n";
                        // exibe as informações do livro encontrado
                        cout<<"\n\tLivro encontrado: " << titulos[i] << "\n\tISBN: " << isbn[i] << "\n\tSinopse: "
                            << sinopse[i] << "\n\tPreço: R$" << precos[i] << "\n\tQuantidade: " << quantidades[i] << "\n";
                        break; // Encerra o loop se o livro for encontrado
                    }
                }
                if(!encontrado){
                	setColor(textColor,backgroundColor);
                	cout<<"\t----------------------------";
                    cout<<"\n\t|Livro não encontrado.\n";
                    cout<<"\t----------------------------\n";
                	Sleep(1000);
                	system("cls"); // limpa a tela do console
				}
            }
        }else if(opcao == 3){
		    cout<<"\n\t         ==|ALTERAÇÃO DE LIVROS|==\n";
		
		    long long int isbnAlteracao; // variável para armazenar o ISBN do livro a ser alterado
		    cout<<"\t------------------------------------------\n";
		    cout<<"\tDigite o ISBN do livro para ser alterado: "; cin>>isbnAlteracao; // lê o ISBN a ser alterado
		
		    bool encontrado = false; // variável para indicar se o livro foi encontrado
		
		    for(int i = 0; i < totalLivros; i++){
		        if(isbn[i] == isbnAlteracao){ // verifica se o ISBN do livro no array é igual ao informado
		            encontrado = true;
		            cout<<"\t----------------------------\n";
		            cout<<"\tLivro encontrado: " << titulos[i] << "\n\tISBN: " << isbn[i] << "\n\tSinopse: "
		                << sinopse[i] << "\n\tPreço: R$" << precos[i] << "\n\tQuantidade: " << quantidades[i] << "\n";
		
		            // permite ao usuário alterar as informações do livro
		            cout<<"\tDigite as novas informações:\n";
		            cout<<"\tTítulo: ";
		            cin.ignore();                 // limpa o buffer do teclado
		            getline(cin, titulos[i]);     // lê o novo título
		            cout<<"\tSinopse: ";
		            getline(cin, sinopse[i]);     // lê a nova sinopse
		            cout<<"\tPreço: "; cin>>precos[i];          // lê o novo preço
		            cout<<"\tQuantidade: "; cin>>quantidades[i]; // lê a nova quantidade
		            
					setColor(textColor,backgroundColor);
					cout<<"\t----------------------------\n";
		            cout<<"\n\t|Livro alterado com sucesso!\n"; // mensagem de confirmação
		            cout<<"\t----------------------------\n";
		            Sleep(1000);
		            break;
		        }
		    }
		    if(!encontrado){
				setColor(textColor,backgroundColor);
		    	cout<<"\t----------------------------";
		        cout<<"\n\t|Livro não encontrado.\n";
		        cout<<"\t----------------------------\n";
		    	Sleep(1000);
		    	system("cls"); // limpa a tela do console
		    }
		}else if(opcao == 4){
		    cout<<"\n\t       ==|EXCLUSÃO DE LIVROS|==\n";
		    
			long long int isbnExclusao; // variável para armazenar o ISBN do livro a ser excluído
			cout<<"\t--------------------------------------\n";
		    cout<<"\tDigite o ISBN do livro a ser excluído: "; cin>>isbnExclusao; // lê o ISBN a ser excluído
		
		    bool encontrado = false; // variável para indicar se o livro foi encontrado
		
		    for(int i = 0; i < totalLivros; i++){
		        if(isbn[i] == isbnExclusao){ // verifica se o ISBN do livro no array é igual ao informado
		            encontrado = true;
		            cout<<"\t----------------------------\n";
		            cout<<"\n\tLivro encontrado: " << titulos[i] << "\n\tISBN: " << isbn[i] << "\n\tSinopse: "
		                << sinopse[i] << "\n\tPreço: R$" << precos[i] << "\n\tQuantidade: " << quantidades[i] << "\n";
		
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
		            cout<<"\n\t|Livro excluído com sucesso!\n";
		            cout<<"\t----------------------------\n";
		            Sleep(1000);
		            system("cls"); // limpa a tela do console
		            break;
		        }
		    }
		    if(!encontrado){
				setColor(textColor,backgroundColor);
		    	cout<<"\t----------------------------";
		        cout<<"\n\t|Livro não encontrado.\n";
		        cout<<"\t----------------------------\n";
		    	Sleep(1000);
		    	system("cls"); // limpa a tela do console
		    }
		}else if(opcao == 5){
		    cout<<"\n\t|Encerrando o programa...\n";
		    Sleep(1000);
		    system("cls"); // limpa a tela do console
		}else{
		    cout<<"\n\t|Opção inválida. Tente novamente.\n";
		    Sleep(1000);
		}
    }while(opcao != 5);
	return 0;
}