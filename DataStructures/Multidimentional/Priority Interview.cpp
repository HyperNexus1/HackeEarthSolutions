#include <iostream>
 
void bubbleSort(long long *a, long long n)
{
	int  temp;
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (a[j] < a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
 
int main()
{
	long long n;
 
	std::cin >> n;
	long long a[10000000][2],*m,*f,mcount=0,fcount=0;
	m = new long long[10000000];
	f = new long long[10000000];
	for (int i=0;i<n;i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cin >> a[i][j];
		}
		if (a[i][0] == 0) {
			f[fcount] = a[i][1];
			fcount++;
		}
		else {
			m[mcount] = a[i][1];
			mcount++;
		}
	}
	bubbleSort(f, fcount);
	bubbleSort(m, mcount);
	for (int j = 0; j < fcount; j++)
	{
		std::cout << f[j]<<" ";
	}
	for (int j = 0; j < mcount; j++)
	{
		std::cout << m[j]<<" ";
	}
	
 
 
}