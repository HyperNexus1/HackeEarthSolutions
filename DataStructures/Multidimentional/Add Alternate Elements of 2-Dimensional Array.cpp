#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
	int a[3][3];
	int sum=0, sum1=0;
	bool s=true, s1=false;
	for (int i=0;i<3;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (s) {
				sum = sum + a[i][j];
				//cout << sum<<"\n";
				s = !s;
			}else {
				s = !s;
			}
			
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (s1) {
				sum1 = sum1 + a[i][j];
				//cout << sum1 << "\n";
				s1 = !s1;
			}else {
				s1 = !s1;
			}
 
		}
	}
	cout << sum << "\n" << sum1;
}