#include <iostream>
#include <locale>

using namespace std;

int comparar (int a, int b) {
	return (a>b) ? a:b;
}

float comparar (float a, float b) {
	return (a>b) ? a:b;
}

string comparar (string a, string b) {
	return (a.length()>b.length()) ? a:b;
}




int main()
{
	setlocale(LC_ALL,"portuguese");
	int x, y;
	float a, b;
	string p1, p2;
	
	cout << "Digite 2 números Inteiros: >";
	cin >> x >> y;
	cout << " - O maior é: " << comparar(x,y) << endl;
	cout << "Digite 2 números flutuantes: > ";
	cin >> a >> b;
	cout << " - O maior é: " << comparar(a,b) << endl;
	cout << "Digite 2 string's: >";
	cin >> p1 >> p2;
	cout << " -  O maior é: " << comparar(p1,p2) << endl;
	
	return 0;
}