/*******************************************************
*		BIR DIZININ TUM ELEMANLARINI KATSAYI ILE ÇARPMA
*		Author: Hakan Eryücel
*******************************************************/
#include "stdio.h"

int main ()
{
	float dizi[11]= {200,255,412,150,36,78,985,5,452,674,321};
	float yeniDizi[11];
	float k;
	printf("Dizinin carpilacagi katsayiyi(k) giriniz : ");
	scanf("%f",&k);
	for(int i=0;i<11;i++)
	{
		yeniDizi[i]=dizi[i]*k;
	}
	printf("\tEski\tYeni\tArtis\n");
	for(int i=0;i<11;i++)
	{
		printf("\t%0.2f\t%0.2f\t%0.2f\n",dizi[i],yeniDizi[i],yeniDizi[i]-dizi[i]);
	}
	return 0;
}