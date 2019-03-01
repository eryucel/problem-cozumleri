/**********************************************
*		BIR DIZININ TUM ELEMANALARINI EKRANA YAZDIRMA
*		Author: Hakan Eryücel
***********************************************/
#include "stdio.h"

int main ()
{
	int Array[15]= {7,9,6,52,35,45,699,88,11,21,32,47,68,24,44};
	for(int i=0;i<15;i++)
	{
		printf("Dizinin %d. elemani : %d\n",i,Array[i]);
	}
	return 0;
}