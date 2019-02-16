/**********************************************
*		PERMÜTASYON HESAPLAMA
*		Author: Hakan Eryücel
***********************************************/
#include "stdio.h"

int Faktoriyel (int num)
{
	int ans=1;
	for(int i=1;i<=num;i++)
	{
		ans*=i;
	}
	return ans;
}
int main ()
{
	int n,r,ans=0;
	printf("Sirasi ile permutasyon degerlerini giriniz : ");
	scanf("%d%d",&n,&r);
	ans=Faktoriyel(n)/Faktoriyel(n-r);
	printf("Permutasyon : %d",ans);
	return 0;
}