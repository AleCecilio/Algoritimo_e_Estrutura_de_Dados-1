#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

struct TPontos{
	int x, y;
};

int main()
{
	setlocale(LC_ALL,"portuguese");
	TPontos pontos[2];
	float dist;
	for (int i=0; i <= 1; i++)
	{
		cout << "Digite x: "; cin >> pontos[i].x;
		cout << "Digite y: "; cin >> pontos[i].y;
		cout << endl;
	}
	dist = sqrt(pow(pontos[0].x-pontos[1].x,2)+pow(pontos[0].y-pontos[1].y,2));
	cout << "A distância entre os pontos é de: " << dist ;
	return 0;
}