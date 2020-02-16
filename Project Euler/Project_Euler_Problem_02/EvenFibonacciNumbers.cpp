/*****************************************
*			PROJECT EULER
*			  PROBLEM 2
*		EVEN FIBONACCI NUMBERS
*		 Author: Hakan Eryücel
*****************************************/
#include <iostream>
using namespace std;
int main()
{
	long sum=0,number;
	cout<<"Lutfen Pozitif Bir Sayi Giriniz : ";
	cin>>number;
	long first=1,second=1,tmpSum=0;;
	for(tmpSum;tmpSum<=number;)
	{
		if(tmpSum%2==0)
		{
			sum+=tmpSum;
		}
		tmpSum=first+second;
		second=first;
		first=tmpSum;
	}
	cout<<endl<<number<<"sayisindan kucuk fibonacci sayilarinin toplami : "<<sum<<endl;
	system("pause");
	return 0;
}