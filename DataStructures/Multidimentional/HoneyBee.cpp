//this code works for hop==1 only
#include <cstring> 
#include <iostream>



using namespace std;

int sumstep1(int m[201][201], int x, int y ,int steps,int n,int m1,int visit[201][201])
{
	int sum=0;
	if ( (x + 1) <= m1 && visit[x + 1][y] == 0)
	{
		sum = sum + m[x+1][y];
		visit[x + 1][y] = 1;
	}
	if (x - 1 >= 0 && visit[x - 1][y] ==0) {
		sum = sum + m[x - 1][y];
		visit[x - 1][y] = 1;
	}
	if (y + 1 >=0 && visit[x][y + 1] ==0)
	{
		sum = sum + m[x][y + 1];
		visit[x][y + 1] = 1;
	}
	if (y - 1 <= n && visit[x][y - 1] ==0)
	{
		sum = sum + m[x][y-1];
		visit[x][y - 1] = 1;
	}
	//diagonal elements
	if ((x + 1) <= m1 && y+1>=0 && visit[x + 1][y + 1] ==0)
	{
		sum = sum + m[x + 1][y+1];
		visit[x + 1][y + 1] = 1;
	}
	if (x - 1 >= 0 && y+1 >=0 && visit[x - 1][y + 1] ==0) {
		sum = sum + m[x - 1][y+1];
		visit[x - 1][y + 1] = 1;
	}
// 	if (y + 1 >= 0 && x+1<=m1)
// 	{
// 		sum = sum + m[x+1][y + 1];
// 	}
	if (y - 1 <= n && x+1 <=m1 && visit[x + 1][y - 1] ==0)
	{
		sum = sum + m[x+1][y - 1];
		visit[x + 1][y - 1] = 1;
	}
	if (y - 1 <= n && x - 1 >=0 && visit[x - 1][y - 1] ==0)
	{
		sum = sum + m[x -1][y - 1];
		visit[x - 1][y - 1] = 1;
	}


	return sum;
}
int main()
{
	int t;//number of test cases
	int n, m;//width and height of matrix
	int matrix[201][201];//matrix
	int visit[201][201];
	int query=0;
	int q[201][3];
	memset(matrix,0, sizeof(matrix[0][0]) * 201 * 201);
	memset(visit, 0, sizeof(visit[0][0]) * 201 * 201);
	memset(q, 0, sizeof(q[0][0] * 201 * 3));
	//cout << "hi";
	
	cin >> t;
	cin >> n >> m;
	for (int i=0;i<n;i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
	cin >> query;
	for (int i = 0; i < query; i++)
	{
		int steps, x, y;
		int sum=0;
		cin >> q[i][0] >> q[i][1] >> q[i][2];//query input
		steps = q[i][0];
		x = q[i][1];
		y = q[i][2];
		
	    sum =  sumstep1(matrix,x,y,steps,n,m,visit);
		cout << sum<<endl;
		
	}
	

}
