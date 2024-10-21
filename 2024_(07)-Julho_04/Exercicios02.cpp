#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int num[10], x=0, i=1,freq=1;
	cout << "Digite números inteiros:\n";
	
	while (x < 10)
	{
		cin >> num[x];
		x++;
	}
	x =0;
	cout << "Frequência dos números:\n";
	while (x < 10)
	{
		while (i < 10)
		{
			if (num[x]==num[i])
			{
				freq+=1;
			}
			i++;
		}
		cout << num[x] << " aparece " << freq <<" vez(es)\n";
		i = 0;
		x++;
		freq = 0;
	}
	return 0;
}