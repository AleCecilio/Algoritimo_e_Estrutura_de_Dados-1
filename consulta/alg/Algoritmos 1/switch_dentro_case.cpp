#include <iostream>
using namespace std;

int main()
{
    int op = 0, filme1 = 0, filme2 = 0, filme3 = 0, voto = 0;
    int mbom = 0, bom = 0, neutro = 0, ruim = 0;
    char aux = 's'; // Declaração correta do char

    while (op != 5){
        cout << "1- Pesquisa Filme\n";
        cout << "2- Pesquisa Profissão\n";
        cout << "3- Pesquisa Feriado\n";
        cout << "4- Resultados\n";
        cout << "5- Sair\n";
        cout << "Informe sua opção: "; cin >> op;

        switch (op){ // Menu principal
            case 1:
                cout << "QUAL FILME É DO SEU INTERESSE ?\n";
                cout << "1- DIVERTIDAMENTE 2\n";
                cout << "2- MEU MALVADO FAVORITO 4\n";
                cout << "3- DEADPOOL & WOLVERINE\n";
                cout << "Informe sua opção: "; cin >> voto;
                
				switch (voto){ // Pesquisa de filmes
                    case 1: filme1++; break;
                    case 2: filme2++; break;
                    case 3: filme3++; break;
                    default: cout << "Opção inválida!!\n";
                } break;
            
            case 2:
                cout << "LEVANTAMENTO DE DADOS NA ÁREA DE TI\n";
                cout << "1 - MUITO BOM\n";
                cout << "2 - BOM\n";
                cout << "3 - NEUTRO\n";
                cout << "4 - RUIM\n";
                cout << "Informe a opção: "; cin >> voto;
                
				switch (voto){ // Pesquisa de profissão
                    case 1: mbom++; break;
                    case 2: bom++; break;
                    case 3: neutro++; break;
                    case 4: ruim++; break;
                    default: cout << "Opção inválida!!\n";
                } break;
            
            case 3:
                cout << "QUAL SEU INTERESSE NO FERIADO DO DIA 06/08\n";
                cout << "1- Sim\n";
                cout << "2- Não\n";
                cout << "Informe a opção: "; cin >> voto;
                
				switch (voto){ // Pesquisa de feriado
                    case 1: aux = 's'; break;
                    case 2: aux = 'n'; break;
                    default: cout << "Opção inválida!!\n";
                } break;

            case 4:
                cout << "RESULTADOS DAS PESQUISAS\n";
                cout << "Pesquisa Filme\n";
                cout << "Divertidamente 2: " << filme1 << " votos\n";
                cout << "Meu Malvado Favorito 4: " << filme2 << " votos\n";
                cout << "Deadpool & Wolverine: " << filme3 << " votos\n";
                cout << endl;
                cout << "Trabalho TI\n";
                cout << "Muito Bom: " << mbom << " votos\n";
                cout << "Bom: " << bom << " votos\n";
                cout << "Neutro: " << neutro << " votos\n";
                cout << "Ruim: " << ruim << " votos\n";
                cout << endl;
                break;
            
            case 5: cout << "Saindo...\n"; break;

            default: cout << "Opção inválida!!\n"; break;
        }
    }

    return 0;
}
