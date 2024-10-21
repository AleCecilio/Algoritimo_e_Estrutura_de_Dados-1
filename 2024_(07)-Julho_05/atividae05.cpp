#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "portuguese");
	int x=1,  na, ti=0, i, media_i;
	cout << "Digite o número de alunos: ";
	cin >> na;
	while (x<na || x==na)
	{
		cout << "Digite a idade do " <<x <<"°aluno";
		cin >> i;
		ti = (ti+i);
		x =(x+1);
	}
	media_i = (ti/na);
	cout << "A média das idades dos alunos é de: " << media_i;
	
	
	
	
	
	return 0;
}