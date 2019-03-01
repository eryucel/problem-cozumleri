/*********************************************************
*		©K© D©Z©N©N ELEMANLARINI KARªILIKLI OLARAK TOPLAMA
*		Author: Hakan Eryücel
**********************************************************/
#include "stdio.h"

int main ()
{
	int array[]= {7,9,6,52,35,45,699,88,11,21,32,47,68,24,44};
	int i,j;
	printf("Degistirilecek sayilarin indislerini sirasi ile giriniz : ");
	scanf("%d%d",&i,&j);
	int tmp=array[i];
	array[i]=array[j];
	array[j]=tmp;
	for(int x=0;x<sizeof(array)/sizeof(array[0]);x++)
	{
		printf("\t%d\n",array[x]);
	}
	return 0;
}