/*****************************************
*			PROJECT EULER
*			  PROBLEM 
*		
*		Author: Hakan Eryücel
*****************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	long palindrome=0;
	string sNum,tmpSNum="";
	int flag=0;
	for(int i=999;i>99;i--)
	{
		for(int j=999;j>99;j--)
		{
			sNum=to_string(i*j);
			tmpSNum="";
			for(int z=sNum.length()-1;z>=0;z--)
			{
				tmpSNum+=sNum[z];
			}
			if(tmpSNum==sNum)
			{
				long tmp=stol(sNum);
				if(palindrome<tmp)
				{
					palindrome=tmp;
				}
			}
		}
	}
	cout<<"\n3 basamakli iki sayinin carpimi ile elde edilebilecek en buyuk asal sayi : "<<palindrome<<endl;
	system("pause");
	return 0;
}