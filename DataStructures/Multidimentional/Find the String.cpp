#include <iostream>
#include <cstring>
 
 
using namespace std;
int main()
{
	int n;//no of cases
	char string[251001];//string input to search
	long long strlenght;
	char strmatrix[501][501];//string matrix
 
	cin >> n;
 
	for (int i=0;i<n;i++)
	{
		int m, n;//width and height of matrix
		cin >> m >> n;
		//string matrix input
		for (int x=0;x<m;x++)
		{
			for (int z=0;z<n;z++)
			{
				cin >> strmatrix[x][z];
			}
		}
		cin >> string;
		strlenght = strlen(string);//string length not including 0
// 		cout << strlenght;
// 		cout << string[0];
		//check string in matrix
		//string demo  axbaydb
		int k = 0;
		int x = 0;
		//issue
		Continue:
		for ( x = 0 ; x < m   ; x++ ,k++)
		{
			/*cout << x << "\nk"<<k;*/
			for (int z = 0; z < n; z++)
			{
				/*cout << "In setter loop\n";*/
				 if (string[k] == strmatrix[x][z]) {
					string[k] = 0;
					strmatrix[x][z] = 0;
					break;
				 }
				 
				
			}
		    if (k == (strlenght - 1)) {
			goto Break;
				 }
			if (x == m - 1 && k != strlenght - 1) {
				x = -1;
				/*cout << "set to 0\n"<<x<<"\n";*/
			}
			
		}
		Break:
		//right code
		for (int v = 0; v < strlenght; v++) {
// 			cout << string[v];
// 			cout << v;
			if (string[v] != 0) {
				cout << "No\n";
// 				cout << v;
// 				cout << string[v];
				
			}
			else if (v == strlenght-1) {
				cout << "Yes\n";
			}
		}
		if (i == 5) {
			break;
		}
 
 
	}
	
 
}