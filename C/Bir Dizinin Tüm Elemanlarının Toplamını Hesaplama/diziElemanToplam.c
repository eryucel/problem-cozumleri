/*********************************************************
*		BIR DIZININ TUM ELELMANLARININ TOPLAMINI HESAPLAMA
*		Author: Hakan Eryücel
**********************************************************/
#include "stdio.h"

int main ()
{
	int Array[]= {7,9,6,52,35,45,699,88,11,21,32,47,68,24,44};
	int toplam=0;
	for(int i=0;i<sizeof(Array)/sizeof(Array[0]);i++)
	{
		toplam+=Array[i];
	}
	printf("Dizinin tum elemanlarinin toplami : %d",toplam);
	return 0;
}