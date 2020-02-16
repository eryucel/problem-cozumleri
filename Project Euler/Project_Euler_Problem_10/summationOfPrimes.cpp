/*****************************************
*			PROJECT EULER
*			  PROBLEM 10
*			SUM OF PRIMES
*		Author: Hakan Eryücel
*****************************************/
#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	for(int i=2;i<2000000;i++)
	{
		bool flag=true;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=false;
			}
		}
		if(flag)
		{
			sum+=i;
		}
	}
	cout<<"2 milyondan kucuk asal sayilarin toplami = "<<sum<<endl;
	system("pause");
	return 0;
}