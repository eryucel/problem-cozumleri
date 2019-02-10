/*****************************************
*			PROJECT EULER
*			  PROBLEM 1 
*		 MULTİPLES OF 3 OR 5
*		Author: Hakan Eryücel
*****************************************/
#include <iostream>
using namespace std;

int main()
{
	int sum=0,number;
	cout<<"Lutfen Pozitif Bir Sayi Giriniz : ";
	cin>>number;
	for(int i=1;i<number;i++)
	{
		if(i%3==0||i%5==0)
		{
			sum+=i;
		}
	}
	cout<<number<<"sayisindan kucuk, 3'e veya 5'e bolunen sayilarin toplami : "<<sum<<endl;
	system("pause");
	return 0;
}