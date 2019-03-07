/*********************************************************
*		BIR KELIMEYI ASCII TABLOSUNA GORE SIFRELEME
*		Author: Hakan Eryücel
**********************************************************/
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	int s[]={3,55,86,21,7,9,35,66,75};
	int cift=0,tek=0,asal=0;
	for(int i = 0;i<sizeof(s)/sizeof(*s);i++)
	{
		int sayi=s[i];
		if(sayi%2==0)
		{
			cift++;
		}
		int bolen = 0;
		for(int j=0;j<=sayi;j++)
		{
			if(sayi%j==0)
			{
				bolen++;
			}
		}
		if(bolen==2)
		{
			asal++;
		}
	}
	tek=sizeof(s)/sizeof(*s)-cift;
	cout<<"Toplam Cift Sayi : "<<cift<<endl;
	cout<<"Toplam Tek Sayi : "<<tek<<endl;
	cout<<"Toplam Asal Sayi : "<<asal<<endl;
	return 0;
}