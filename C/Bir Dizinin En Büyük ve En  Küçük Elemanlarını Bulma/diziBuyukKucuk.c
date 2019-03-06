/*********************************************************
*		BIR DIZININ EN BUYUK VE EN KUCUK ELEMANLARINI BULMA
*		Author: Hakan Eryücel
**********************************************************/
#include "stdio.h"

int main ()
{
	int array[]= {7,9,6,52,35,45,699,88,11,21,32,47,68,24,44};
	int smallest=array[0],biggest=array[0];
	for(int i=0;i<sizeof(array)/sizeof(array[0]);i++)
	{
		if(array[i]<smallest)
		{
			smallest=array[i];
		}
		if(array[i]>biggest)
		{
			biggest=array[i];
		}
	}
	printf("Dizinin en buyuk elemani : %d\nDizinin en kucuk elemani : %d",biggest,smallest);
	return 0;
}