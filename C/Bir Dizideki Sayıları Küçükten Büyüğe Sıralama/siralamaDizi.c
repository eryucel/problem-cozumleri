/*********************************************************
*		BIR DIZIDEKI SAYILARI KUCUKTEN BUYUGE SIRALAMA
*		Author: Hakan Eryücel
**********************************************************/
#include "stdio.h"

int main ()
{
	int n;
	printf("Dizinin elaman sayisini(n) giriniz : ");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++)
	{
		printf("\n%d. elemanin  degerini giriniz : ",i+1);
		scanf("%d",&array[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(array[j]<array[i])
			{
				int tmp =array[j];
				array[j]=array[i];
				array[i]=tmp;
			}
		}
	}
	printf("\n	Yeni dizi	");
	for(int i=0;i<n;i++)
	{
		printf("\n	%d. eleman : %d",i+1,array[i]);
	}
	return 0;
}