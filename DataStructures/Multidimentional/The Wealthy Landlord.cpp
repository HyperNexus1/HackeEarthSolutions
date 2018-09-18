#include "pch.h"
#include <iostream>


using namespace std;




int main()
{
	int n;
	long long b[1000][1000];
	
	long long input[100][100], cost = 0, totalcost = 0;

	memset(b, 0, sizeof(b[0][0]) * 1000 * 1000);//input 0 in 2d array
	memset(input, 0, sizeof(b[0][0]) * 100 * 100);//input in input matrix
	cin >> n;//input
	//input in b matrix taken
	for (int i = 0; i < n; i++)
	{

		cin >> input[i][0] >> input[i][1] >> input[i][2] >> input[i][3] >> input[i][4];//input in input matrix x1,y1,x2,y2,c
		int xdiff = input[i][0] - input[i][2];
		int ydiff = input[i][1] - input[i][3];

		for (int j = input[i][0]; i < input[i][2]; i++)
		{
			for (int z = input[i][1]; z < input[i][3]; z++)
			{
				if (b[j][z] == 0)
				{
					b[j][z] = 2;
				}
				else if (b[j][z] == 2)
				{
					b[j][z] = 1;//if overlap detected set bit to 1
				}

			}
		}

	}
	for (int i = 0; i < n; i++)
	{
		cost = input[i][4];
		for (int j = input[i][0]; i < input[i][2]; j++)
		{
			for (int z = input[i][1]; z < input[i][3]; z++)
			{
				if (b[j][z] == 1)
				{
					totalcost = totalcost + cost;
				}
			}
		}
	}
	cout << "totalcost";
	
}
