#include <iostream>
using namespace std;

int main()
{
	int smp;
	for(int i=20;;i+=20)
	{
		int flag=0;
		for(int j=2;j<=20;j++)
		{
			if(i%j!=0)
			{
				flag=1;
			}
		}
		if(flag==0)
		{
			smp=i;
			break;
		}
	}
	cout<<smp;
	system("pause");
	return 0;
}