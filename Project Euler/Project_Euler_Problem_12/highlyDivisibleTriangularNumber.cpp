/*****************************************
*			PROJECT EULER
*			  PROBLEM 12
*	 HIGHLY DIVISIBLE TRIANGULAR NUMBER
*		Author: Hakan Eryücel
*****************************************/
#include <iostream>
using namespace std;

int main()
{
	int sum=0;
	for(int i=1;;i++)
	{
		sum+=i;
		int count=0;
		for(int j=1;j<=sum;j++)
		{
			if(sum%j==0)
			{
				count++;
			}
		}
		if(count>500)
		{
			break;
		}
	}
	cout<<"500'den fazla bolene sahip ilk ucgensel sayi : "<<sum<<endl;
	system("pause");
	return 0;
}