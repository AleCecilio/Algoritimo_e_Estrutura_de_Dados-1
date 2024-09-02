#include <iostream>

using namespace std;

int main ()
{
	setlocale(LC_ALL, "portuguese");
		float v1, v2, v3, v4, v5;
		int voto;
		char op='S';
		while (toupper(op) == 'S')
		{
			cout << "Opções de voto:\n"; 
			cout << "1 - Fulano de Tal\n"; 
			cout << "2 - Cíclano\n"; 
			cout << "3 - Beltrano\n"; 
			cout << "4 - Nulo\n"; 
			cout << "5 - Branco\n";
			cout << "Informe seu voto: "; cin >> voto;
			cout << "Deseja fazer nova leitura? (S/N): "; cin >> op;
		 	switch(voto)
		 	{
			 	case 1: v1+=1;
		 		break;	 
				case 2: v2+=1;
				break;	 
				case 3: v3+=1;
				break;	 
				case 4: v4+=1;
				break;	 
				case 5: v5+=1;
				break;	 
			    default:
					cout << "Opção inválida:";
			 }
		}
		cout << "Resultado \n";
		cout << "1 - Fulano de Tal" << (v1 * 100 / (v1+v2+v3+v4+v5)) << "% \n";
		cout << "2 - Cíclano\n" << (v2 * 100 / (v1+v2+v3+v4+v5)) << "% \n";
	   	cout << "3 - Beltrano\n" << (v3 * 100 / (v1+v2+v3+v4+v5)) << "% \n";
		cout << "4 - Nulo\n" << (v4 * 100 / (v1+v2+v3+v4+v5)) << "% \n";
		cout << "5 - Branco\n" << (v5 * 100 / (v1+v2+v3+v4+v5)) << "% \n";
	
	return 0;
}