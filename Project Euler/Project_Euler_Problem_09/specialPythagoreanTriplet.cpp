/*****************************************
*			PROJECT EULER
*			  PROBLEM 09
*	  SPECIAL PYTHAGOREAN TRIPLET
*		Author: Hakan Eryücel
*****************************************/
#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	for(a=1;a<1000/3;a++)
	{
		int flag=0;
		for(b=1;b<500;b++)
		{
			c=1000-a-b;
			if((a*a)+(b*b)==c*c)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			break;
		}
	}
	cout<<"Toplamlari 1000 eden pisagor 3lüsü :\n"<<"a = "<<a<<", b = "<<b<<", c = "<<c<<endl;
	system("pause");
	return 0;
}