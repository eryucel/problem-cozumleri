/*****************************************
*			PROJECT EULER
*			  PROBLEM 11
*		 LARGEST PRODUCT IN A GRID
*		 Author: Hakan Eryücel
*****************************************/
#include <iostream>
using namespace std;
int main()
{
	int boyut = 20;
	int matris[boyut][boyut];
	for (int y = 0; y < boyut; y++)
	{
		for (int x = 0; x < boyut; x++)
		{
			cin >> matris[x][y];
		}
	}
		int take = 0;
        for (int y = 0; y < boyut; y++)
		{
			for (int x = 0; x < boyut; x++)
			{
				if (x + 3 < boyut)
				{
					int curr = matris[x][y] * matris[x+1][y] * matris[x+2][y] * matris[x+3][y];
					if (take < curr)
						take = curr;
				}
				if (y + 3 < boyut)
				{
					int curr = matris[x][y] * matris[x][y+1] * matris[x][y+2] * matris[x][y+3];
					if (take < curr)
						take = curr;
				}
				if (x + 3 < boyut && y + 3 < boyut)
				{
					int curr = matris[x][y] * matris[x+1][y+1] * matris[x+2][y+2] * matris[x+3][y+3];
					if (take < curr)
						take = curr;
				}
				if (x + 3 < boyut && y >= 3)
				{
					int curr = matris[x][y] * matris[x+1][y-1] * matris[x+2][y-2] * matris[x+3][y-3];
					if (take < curr)
						take = curr;
				}
			}
		}
	cout << take <<endl;
    return 0;
}