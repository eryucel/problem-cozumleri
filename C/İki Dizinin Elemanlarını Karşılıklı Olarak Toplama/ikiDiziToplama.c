/*********************************************************
*		©K© D©Z©N©N ELEMANLARINI KARªILIKLI OLARAK TOPLAMA
*		Author: Hakan Eryücel
**********************************************************/
#include "stdio.h"

int main ()
{
	int firstArray[]= {7,9,6,52,35,45,699,88,11,21,32,47,68,24,44};
	int secondArray[]= {78,91,642,212,66,95,6,3,15,2,32,89,22,47,21};
	int sumArray[sizeof(firstArray)/sizeof(firstArray[0])];
	for(int i=0;i<sizeof(firstArray)/sizeof(firstArray[0]);i++)
	{
		sumArray[i]=firstArray[i]+secondArray[i];
	}
	printf("\tA+B=C\n");
	for(int i=0;i<sizeof(firstArray)/sizeof(firstArray[0]);i++)
	{
		printf("\t%d+%d=%d\n",firstArray[i],secondArray[i],sumArray[i]);	
	}		
	return 0;
}