/*********************************************************
*		BIR KELIMEYI ASCII TABLOSUNA GORE SIFRELEME
*		Author: Hakan Eryücel
**********************************************************/
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	string kelime;
	cout<<"Kelimeyi giriniz : ";
	cin>>kelime;
	for(int i=0;i<kelime.size();i++)
	{
		kelime[i]=(char)(((int)kelime[i])+15);
	}
	cout<<endl<<"Sifrelenmis hali : "<<kelime<<endl;
	return 0;
}