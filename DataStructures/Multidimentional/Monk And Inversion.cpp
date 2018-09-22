#include <cstring> 
#include <iostream>



using namespace std;



int main()
{
	int t;
	cin >> t;
	for (int i=0;i<t;i++)
	{
		int n;
		int matrix[100][100]; 
		int count = 0;
		int j, z, x, q;
		cin >> n;
		//cout << "matrix rows and columns Accepted \n";
		//memset(matrix, 0, matrix[100][100] * 100 * 100);
		memset(matrix, 0, sizeof(matrix[0][0]) * 100 * 100);
		for ( j=0;j<n;j++)
		{
			for ( z = 0; z < n;z++)
			{
				cin >> matrix[j][z];
				//cout << "matrix rows "<<j<<"Column"<<z<<" Input Accepted\n";
			}
		}
		//cout << "Done With input\n";
		for ( j = 0; j < n; j++)
		{
			//cout << "Hey \n";
			for ( z = 0; z < n; z++)
			{
				//check if >
				for ( x = 0; x <= j; x++)
				{
					for ( q = 0; q <= z; q++)
					{
						if (matrix[x][q] > matrix[j][z]) {
							count++;
						}
					}
				}
			}
		}
		cout << count << "\n";

	}

}