#include <iostream>
#include <locale>

using namespace std;

int MinParaSeg (int minutos) {
	return minutos * 60;
}


int main()
{
	setlocale(LC_ALL,"portuguese");
	int min;
	cout << "Digite os minutos: > ";
	cin >> min;
	cout << endl;
	cout << min << " minutos é igual a " << MinParaSeg(min) << " segundos";
	return 0;
}