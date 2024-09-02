/* Faça um programa que leia as medidas das alturas
e idades dos jodadores do time de volei de SI e 
ao final informe a média das alturas e idades,
 a maior idade e a menor altura.
 */
#include <iostream>
using namespace std;
int main()
{
	float a1,a2,a3,a4,a5,a6,i1,i2,i3,i4,i5,i6;
	float media_alt, media_id, maior, menor;
	cout <<"Altura do jogador1: "; cin>> a1;
	cout <<"Altura do jogador2: "; cin>> a2;
	cout <<"Altura do jogador3: "; cin>> a3;
	cout <<"Altura do jogador4: "; cin>> a4;
	cout <<"Altura do jogador5: "; cin>> a5;
	cout <<"Altura do jogador6: "; cin>> a6;
	
	cout <<"Idade dos jogadores: "; 
	cin>> i1>>i2>>i3>>i4>>i5>>i6;
	
	media_alt = (a1+a2+a3+a4+a5+a6)/6;
	media_id = (i1+i2+i3+i4=i5+i6)/6;
	cout<<"Média das alturas= "<<media_alt<< endl;
	cout<<"Média das idades= "<<media_id<< endl;
	if((a1<a2)&&(a1<a3)&&(a1<a4)&&(a1<a5)&&(a1<a6))
		cout<<"Menor altura= "<< a1<<endl;
	if((a2<a1)&&(a2<a3)&&(a2<a4)&&(a2<a5)&&(a2<a6))
		cout<<"Menor altura= "<< a2<<endl;
	if((a3<a1)&&(a3<a2)&&(a3<a4)&&(a3<a5)&&(a3<a6))
		cout<<"Menor altura= "<< a3<<endl;
	if((a4<a1)&&(a4<a2)&&(a4<a3)&&(a4<a5)&&(a4<a6))
		cout<<"Menor altura= "<< a4<<endl;
	if((a5<a1)&&(a5<a2)&&(a5<a3)&&(a5<a4)&&(a5<a6))
		cout<<"Menor altura= "<< a5<<endl;
	if((a6<a1)&&(a6<a2)&&(a6<a3)&&(a6<a4)&&(a6<a5))
		cout<<"Menor altura= "<< a6<<endl;
	
	if((i1>i2)&&(i1>i3)&&(i1>i4)&&(i1>i5)&&(i1>i6))
		cout <<"Maior idade= "<<i1;
	if((i2>i1)&&(i2>i3)&&(i2>i4)&&(i2>i5)&&(i2>i6))
		cout <<"Maior idade= "<<i2;
	if((i3>i1)&&(i3>i2)&&(i3>i4)&&(i3>i5)&&(i3>i6))
		cout <<"Maior idade= "<<i3;
	if((i4>i1)&&(i4>i2)&&(i4>i3)&&(i4>i5)&&(i4>i6))
		cout <<"Maior idade= "<<i4;
	if((i5>i1)&&(i5>i2)&&(i5>i3)&&(i5>i4)&&(i5>i6))
		cout <<"Maior idade= "<<i5;
	if((i6>i1)&&(i6>i2)&&(i6>i3)&&(i6>i4)&&(i6>i5))
		cout <<"Maior idade= "<<i6;	
	return 0;
}