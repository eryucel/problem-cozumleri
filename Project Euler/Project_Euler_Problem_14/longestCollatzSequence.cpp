/*****************************************
*			PROJECT EULER
*			  PROBLEM 14
*		LONGEST COLLATZ SEQUENCE
*		 Author: Hakan Eryücel
*****************************************/
#include <iostream>
using namespace std;
long long int arr[1000000];
long long int collatz(long long int n)
{
	long long int chain= 1,tmpN=n;
	while(n>1)
	{
		chain++;
		if(n%2==0)
		{
			n/=2;
		}
		else
		{
			n=(3*n)+1;
		}
		if(tmpN>n&&n!=1)
		{
			chain+=arr[n]-1;
			break;
		}
	}
	return chain;
}
int main()
{
	long long int longest=0,index=0;
	for(long long int i=1;i<1000000;i++)
	{
		arr[i]=collatz(i);
	}
	for(long long int i=999999;i>0;i--)
	{
		if(arr[i]>longest)
		{
			longest=arr[i];
			index=i;
		}
	}
	cout<<"Highest chain : "<<longest<<"\nFrom number : "<<index<<endl;
    return 0;
}