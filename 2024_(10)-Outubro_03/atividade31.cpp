#include <iostream>
#include <locale>

using namespace std;
double soma(double x) {
	double s=0;
	for (int n=0;n<=x;n++) {
		s = n + s;
	}
	return s;
}
int main() {
	setlocale (LC_ALL,"portuguese");
	int val;
	cout << "Digite o Número: ";
	cin >> val;
	cout << soma(val);
	return 0;
}