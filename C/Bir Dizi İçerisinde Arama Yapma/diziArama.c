/*********************************************************
*		BIR DIZI IÇERISINDE ARAMA YAPMA
*		Author: Hakan Eryücel
**********************************************************/
#include "stdio.h"

int main ()
{
	int array[]= {7,9,6,52,35,45,699,88,11,21,32,47,68,24,44};
	int aranan,index=-1;
	printf("Aranacak sayiyi giriniz.");
	scanf("%d",&aranan);
	for(int i=0;i<sizeof(array)/sizeof(array[0]);i++)
	{
		if(array[i]==aranan)
		{
			index=i;
			break;
		}
	}
	if(index!=-1)
	{
		printf("Aranan elemanin indexi : %d",index);
	}
	else
	{
		printf("Aranan eleman bulunamadi.");
	}
	return 0;
}