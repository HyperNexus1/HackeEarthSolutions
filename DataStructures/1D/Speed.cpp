#include <iostream>
 
 
 
int main()
{
	int n ;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int cars = 1;
		int n1, *a;
		std::cin >> n1;
		if(n1>0)
		{
		a = new int[n1-1];
		    
		}
		for (int j = 0; j < n1; j++)
		{
			std::cin >> a[j];
		}
		for (int j = 0; j < n1; j++)
		{
// 			if (j > 0)
// 			{
// 				if (a[j] < a[j - 1])
// 					cars++;
// 				a[j] = min(a[j], a[j - 1]);
// 			}
			if (j > 0) {
				if (a[j] < a[j - 1]) {
					cars++;
					
				}
				else if (a[j] > a[j - 1]) {
					a[j]=a[j-1];
				}
			}
		}
		std::cout << cars << "\n";
	}
	return 0;
}