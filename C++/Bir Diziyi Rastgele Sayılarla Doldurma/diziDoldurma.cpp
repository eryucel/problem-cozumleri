/*********************************************************
*		BIR DIZIYI RASTGELE SAYILARLA DOLDURMA
*		Author: Hakan Eryücel
**********************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main ()
{
	int n;
	cout<<"Dizinin eleman sayisini giriniz : ";
	cin>>n;
	int sayilar[n];
	for(int i=0;i<n;i++)
	{
		sayilar[i]=rand()%99+1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<sayilar[i];
	}
	return 0;
}