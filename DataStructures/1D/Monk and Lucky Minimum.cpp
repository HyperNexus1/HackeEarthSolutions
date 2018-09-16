#include <iostream>
 
 
int mini(int* a, int n) {
	int mini;
	mini = a[0];
	for (int i=0;i<n;i++)
	{
		if (a[i] < mini) {
			mini = a[i];
		}
	}
	return mini;
}
int freq(int*a, int n, int min) {
	int count=0;
	for (int i=0;i<n;i++)
	{
		if (a[i] == min) {
			count++;
		}
	}
	return count;
}
int main()
{
	int n,min,f;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int n1, *a;
		std::cin >> n1;
		a = new int[n1];
		for (int j=0;j<n1;j++)
		{
			std::cin >> a[j];
		}
		min = mini(a, n1);
		f = freq(a, n1, min);
		if (f % 2==0) {
			std::cout << "Unlucky\n";
		}
		else {
			std::cout << "Lucky\n";
		}
	}
}