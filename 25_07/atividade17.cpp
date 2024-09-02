#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL,"portuguese");
	int col;
	cout << "Tamanho do Losango: ";
	cin >> col;
	
	int m = col/2+1;
	string lin, branco;
	lin = "*";
	for (int l=1; l<m; l++)
	{
		for (int c=m; c>l; c--)
			branco+= " ";
		cout << branco << lin<<endl;
		branco="";
		lin +="**";
	}
	cout << lin << endl;
	lin =""; branco=" ";
	for (int l=1; l<m; l++)
	{
		lin = "*";
		for (int c=m-1; c>l; c--)
			lin+= "**";
		cout << branco << lin<<endl;
		lin="";
		branco +=" ";
	}
	return 0;
}