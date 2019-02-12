/*****************************************
*			PROJECT EULER
*			  PROBLEM 07
*		    10001st PRIME
*		Author: Hakan Eryücel
*****************************************/
#include <iostream>
using namespace std;

int main()
{
	int count=0,prime;
	for(int i=2;;i++)
	{
		int flag=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			count++;
		}
		if(count==10001)
		{
			prime=i;
			break;
		}
	}
	cout<<"10001. asal sayi = "<<prime<<endl;
	system("pause");
	return 0;
}