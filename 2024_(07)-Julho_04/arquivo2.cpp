#include <iostream>
using namespace std;

int man()
{
	float a1, a2, a3, a4, a5, a6, i1, i2, i3, i4, i5, i6;
	float media_alt, media_id, maior, menor;
	cout << "Informe a altura do jogador 1"; cin >> a1;
	cout << "Informe a altura do jogador 2"; cin >> a2;
	cout << "Informe a altura do jogador 3"; cin >> a3;
	cout << "Informe a altura do jogador 4"; cin >> a4;
	cout << "Informe a altura do jogador 5"; cin >> a5;
	cout << "Informe a altura do jogador 6"; cin >> a6;
	
	cout << "Informe as idades dos jogadores:";
	cin >>i1>>i2>>i3>>i4>>i5>>i6;
	
	media_alt = (a1+a2+a3+a4+a5+a6)/6;
	media_id = (i1+i2+i3+i4+i5+i6)/6;
	cout << "Média das alturas = "<<media_alt;
	cout << "Média das idades = "<<media_id;
	if ((a1<a2)&&(a1<a3)&&(a1<a4)&&(a1<a5)&&(a1<a6))
		cout << "Menor altura = "<<a1<<endl;
	if ((a2<a1)&&(a2<a3)&&(a2<a4)&&(a2<a5)&&(a2<a6))
		cout << "Menor altura = "<<a2<<endl;
	if ((a3<a1)&&(a3<a2)&&(a3<a4)&&(a3<a5)&&(a3<a6))
		cout << "Menor altura = "<<a3<<endl;
	if ((a4<a1)&&(a4<a2)&&(a4<a3)&&(a4<a5)&&(a4<a6))
		cout << "Menor altura = "<<a4<<endl;
	if ((a5<a1)&&(a5<a2)&&(a5<a5)&&(a5<a4)&&(a5<a6))
		cout << "Menor altura = "<<a5<<endl;
	if ((a6<a1)&&(a6<a2)&&(a6<a3)&&(a6<a4)&&(a6<a5))
		cout << "Menor altura = "<<a6<<endl;
	if ((a1<a2)&&(a1<a3)&&(a1<a4)&&(a1<a5)&&(a1<a6))
		cout << "Menor altura = "<<a1<<endl;
	
	if ((i1>i2)&&(i1>i6)&&(i1>i3)&&(i1>i4)&&(i2>i5))
		cout << "Maior altura = "<<i1<<endl;
	if ((i2>i1)&&(i2>i3)&&(i2>i4)&&(i2>i5)&&(i2>i6))
		cout << "Maior altura = "<<i2<<endl;
	if ((i3>i1)&&(i3>i2)&&(i3>i4)&&(i3>i5)&&(i3>i6))
		cout << "Maior altura = "<<i3<<endl;
	if ((i4>i1)&&(i4>i2)&&(i4>i3)&&(i4>i5)&&(i4>i6))
		cout << "Maior altura = "<<i4<<endl;
	if ((i5>i1)&&(i5>i2)&&(i5>i5)&&(i5>i4)&&(i5>i6))
		cout << "Maior altura = "<<i5<<endl;
	if ((i6>i1)&&(i6>i2)&&(ai>i3)&&(i6>i4)&&(i6>i5))
		cout << "Maior altura = "<<i6<<endl;
	
		
	
	return 0
}