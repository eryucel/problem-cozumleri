/**********************************************
*	DÖNGÜ ILE FIBONACCI SERISINI LISTELEME
*		Author: Hakan Eryücel
***********************************************/
#include <iostream>
using namespace std;

int main()
{
	int n,birinci=1,ikinci=1,ucuncu;
	cout<<"Terim sayisini giriniz : ";
	cin>>n;
	cout<<"\t"<<birinci<<"\t"<<ikinci;
	for(int i=1;i<=n;i++)
	{
		ucuncu=birinci+ikinci;
		cout<<"\t"<<ucuncu;
		birinci=ikinci;
		ikinci=ucuncu;
	}
	return 0;	
}