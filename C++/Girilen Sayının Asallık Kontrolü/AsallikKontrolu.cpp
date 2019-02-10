/**************************************************************
*	GİRİLEN BİR SAYININ ASAL SAYI OLUP OLMADIĞINI KONTROL ETME
*		Author: Hakan Eryücel
**************************************************************/
#include <iostream>
using namespace std;

int main()
{
	int flag=0,n;
	cout<<"Bir sayi giriniz.";
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag++;
		}
	}
	flag!=0?cout<<"Sayi asal degildir.":cout<<"Sayi asaldir.";
	system("pause");
	return 0;
}