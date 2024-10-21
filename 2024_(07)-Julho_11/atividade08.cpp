#include <iostream>

using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");
	
	
	int op, filme, dm=0, mf=0, dw=0,ta=0, tb=0, tc=0, td=0, feriado, feriado1=0, feriado2=0;
	char prof;
	while (op != 5)
	{
		cout << "Opções do Menu:\n";
		cout << "1 - Pesquisa Filme\n";
		cout << "2 - Pesquisa Profissão\n";
		cout << "3 - Pesquisa Feriado\n";
		cout << "4 - Resultaos\n";
		cout << "5 - Sair\n";
		cin >> op;
		
		switch (op)
		{
			case 1: 
				cout << "Qual o filme de interesse:\n";
				cout << "1 - Divertidamente 2\n";
				cout << "2 - Meu Malvado Favorito 4\n";
				cout << "3 - Deadpool e Wolverine\n";
				cin >> filme;
			 		switch (filme)
			 		{
					 	case 1: dm+=1;
					 		break;
			 	 		case 2: mf+=1;
			 	 			break;
			 	 		case 3: dw+=1;
			 	 			break;
			 	 		default: cout << "Opção Inválida!";
			 	 			break;
					 }
			 break;
		 	 case 2: 
		 	 	cout << "Opnião sobre a área de TI:\n";
		 	 	cout << "a - Muito Bom\n";
		 	 	cout << "b - Bom\n";
		 	 	cout << "c - Neutro\n";
		 	 	cout << "d - Ruim\n";
		 	 	cin >> prof;
		 	 		switch (prof)
		 	 			case 'a': ta+=1;
		 	 				break;
		 	 			case 'b': tb+=1;
		 	 				break;
		 	 			case 'c': tc+=1;
		 	 				break;
		 	 			case 'd': td+=1;
		 	 				break;
		 	 			default: cout << "Opção Inválida";
		 	 				break;
			 break;
			 case 3: 
				cout << "Interesse pelo Feriado do dia 06/08:\n ";
				cout << "1 - Bom\n";
				cout << "2 - Ruim\n";
				cin >> feriado;
				 switch(feriado)
				 {
				 case 1:
				 	feriado1+=1;
					 break;
				 case 2:
				 	feriado2+=1;
					 break;
				 default: cout << "Opção Inválida";
					 break;
				 }
   	   	     break;
   	   	     case 4: 
			    cout << "Resultados:\n";
			    cout << endl;
			    cout << endl;
			    
				cout << "Pesquisa de Filme:\n";
				cout << "Divertidamente: "<<dm << endl;
				cout << "Meu Malvado Favorito 2: "<<mf <<endl;
				cout << "Deadpool e Wolverine: " <<dw<<endl;
				cout << "Total de Votos: " <<(dm+mf+dw);
				
				cout << endl;
				cout << endl;
				cout << "Pesquisa de Prodissão:\n";
				cout << "Muito Bom :" <<ta<<endl;
				cout << "Bom: " <<tb<<endl;
				cout << "Neutro: " <<tc<<endl;
				cout << "Ruim: " <<td<<endl;
				cout << "Total de Votos: " <<(ta+tb+tc+td);
				cout << endl;
				cout << endl;
				
				cout << "Interesse pelo Feriado do dia 06/08:\n ";
				cout << "Bom: "<<feriado1<<endl;
				cout << "Ruim :"<<feriado2<<endl;
				cout << "Total de Votos: " <<(feriado1+feriado2);
				cout << endl;
				cout << endl;
			 break;	
		 case 5: 
		 	cout << "Encerrando programa...";
			 break;	 	
		}						
	}
	return 0;
}