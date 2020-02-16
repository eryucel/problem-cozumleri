/*****************************************
*			PROJECT EULER
*			  PROBLEM 06
*		SUM SQUARE DIFFERENCE
*		Author: Hakan Eryücel
*****************************************/
#include <iostream>
using namespace std;

int main()
{
	int sumsq=0,sqsum=0;
	for(int i=1;i<=100;i++)
	{
		sumsq+=i*i;
		sqsum+=i;
	}
	sqsum=sqsum*sqsum;
	cout<<"Toplamlarin karesi ile karelerin toplamlari arasindaki fark = "<<sqsum-sumsq<<endl;
	system("pause");
	return 0;
}