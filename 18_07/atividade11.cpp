#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	for (int i=0; i<=157; i++)
	{
		if (i%2==1)
			cout << i <<", ";
	}
	
	return 0;
}