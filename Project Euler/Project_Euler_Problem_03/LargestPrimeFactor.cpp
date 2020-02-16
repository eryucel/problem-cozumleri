/*****************************************
*			PROJECT EULER
*			  PROBLEM 3
*		 LARGEST PRIME FACTOR
*		 Author: Hakan Eryücel
*****************************************/
#include <iostream>
using namespace std;
int main()
{
	int number,lpf;
	cout<<"Lutfen pozitif bir sayi giriniz : ";
	cin>>number;
	for(int i=number;i>1;i--)
	{
		int flag=0;
		if(number%i==0)
		{
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				lpf=i;
				break;
			}
		}
	}
	cout<<"\nGirdiginiz sayidan kucuk, en buyuk asal sayi : "<<lpf<<endl;
	system("pause");
	return 0;
}