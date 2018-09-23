
#include <iostream>
#include <stack>



using namespace std;

#define mkp make_pair
#define pb push_back

#define ll long long int
#define MOD 1000000007
#define pii pair<int, int>

stack <ll> st;
ll xdir[1000001], ydir[1000001], arr[1000001];

int main()
{
	ll n, i, x;
	
	cin >> n;
	//take input
	//cout << "Input COde\n";
	for (i = 1; i <= n; ++i) {
		
		cin >> arr[i];
	}
	//cout << " y Calculation begin\n";
	
	for (i = 1; i <= n; ++i) {
		if (st.empty() || arr[st.top()] >= arr[i]) {
			st.push(i);
		}
		else {
			while (!st.empty() && arr[st.top()] < arr[i]) {
				xdir[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}
	}
	while (!st.empty()) {
		xdir[st.top()] = -1;
		st.pop();
	}
	//cout << " x Calculation begin\n";
	for (i = n; i > 0; --i) {
		if (st.empty() || arr[st.top()] >= arr[i]) {
			st.push(i);
		}
		else {
			while (!st.empty() && arr[st.top()] < arr[i]) {
				ydir[st.top()] = i;
				st.pop();
			}
			st.push(i);
		}
	}
	while (!st.empty()) {
		ydir[st.top()] = -1;
		st.pop();
	}
	//print result

	for (i = 1; i <= n; ++i) {
		
		cout << xdir[i] + ydir[i] << " ";
	}
	

	return 0;
}