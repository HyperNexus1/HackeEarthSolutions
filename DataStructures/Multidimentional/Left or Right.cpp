#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;
 
bool check(int a, int b) {
	if (a == b) {
		return true;
	}
	else {
		return false;
	}
}
 
 
int main()
{
	int n, q,*a;
 
	cin >> n >> q;//n and q input
	a = new int[n];
	//array input
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	// searching
	for (int i = 0; i < q; i++)
	{
		int ai, z;//ai is city i,z is actual number
		char direction;
		int z1;//temporary variable
		int count=0;//number of steps
		bool found=false;
		cin >> ai >> z >> direction;
		//cout << ai << z << direction<<"\n";//debugging
		if (check(a[ai],z)) {
			cout << "0\n";
		}else if (direction == 'L') 
		{
			//cout << "Hello Its Left\n";//debugging
			//z = (ai - 1 + n) % n;
			for (int m = 0; m < n; m++)
			{
				count++;
				z1 = (ai - 1 + n) % n;
				if (check(a[z1], z)) {
					cout << count << "\n";
					found = true;
					break;
				}
				ai = z1;
			}
			if (found == false) {
				cout << "-1";
			}
 
 
		}else if (direction =='R') 
		{
			//cout << "Hello Its Right\n";//debugging
			//z = (i + 1) % n;
			for (int m = 0; m < n; m++)
			{
				count++;
				z1 = (i + 1) % n;
				if (check(a[z1], z)) {
					cout << count<<"\n";
					found = true;
					break;
				}
				ai = z1;
			}
			if (found == false) {
				cout << "-1";
			}
		}
// 		if (found == false) {
// 			cout << "-1";
// 		}
	}
 
}