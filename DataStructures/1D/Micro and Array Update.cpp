//Language: C++14
#include <iostream>
 
 
using namespace std;
int min(int ans,int temp) {
	if (ans < temp) {
		return ans;
	}
	else {
		return temp;
	}
 
}
 
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int ans = k;
		for (int i = 1; i <= n; i++) {
			int temp;
			cin >> temp;
			ans = min(ans, temp);
		}
		cout << k - ans << endl;
	}
	return 0;
}
