#include <iostream>
 
 
int main() {
	int n,*a;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		int count=1,min,money,b,r;
		//building and rupee input
		std::cin >> b >> r;
		//std::cout << "number of building" << b << " money " << r << "\n";
		a = new int[100000];
		//std::cout << a[0]<<"\n";
		//take input in array
		for (int i = 0; i < b; i++) {
			std::cin >> a[i];
			
			
		}
		min = a[0];
		for (int i = 0; i < b; i++) {
			if (min < a[i]) {
				count++;
				min = a[i];
			}
			else if (min > a[i]) {
 
				continue;
			}
		}
		//std::cout << count<<"count";
		money = count * r;
		std::cout << money<<"\n";
	}
}