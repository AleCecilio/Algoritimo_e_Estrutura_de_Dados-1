/*2 - Faça uma função que recebe a idade de um nadador por parâmetro e retorna,
também por parâmetro, a categora desse nadador de acordo com:
	Idade			Categoria
	5 a 7 anos		Infantil A
	8 a 10 anos		Infantil B
	11 a 13 anos	Juvenil A
	14 a 17 anos 	Juvenil B
	Maiores de 18 	Adulto
		(inclusive)
*/

#include <iostream>
#include <locale>

using namespace std;

void getCategoria (int idade, string &cat) {
	if (idade >=5  && idade <=7){
		cat = "Infantil A";
	} 
	else 
		if (idade >=8 && idade <=10){
				cat = "Infantil B";
		}
	else 
		if (idade >=11  && idade <=13){
			cat = "Juvenil A";
		}
	else 
		if (idade >=14  && idade <=17){
			cat = "Juvenil B";
		}
	else
		if (idade >=18){
			cat = "Adulto";
		}
}


int main()
{
	setlocale(LC_ALL,"portuguese");
	int idade;
	string categoria;
	
	cout << "informe a idade do nadador: ";
	cin >> idade;
	
	getCategoria(idade,categoria);
	cout << "Nadador é da categoria: " << categoria;
	
	
	
	
	return 0;
}