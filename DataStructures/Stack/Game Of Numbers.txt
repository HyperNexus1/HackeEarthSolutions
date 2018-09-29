#include <iostream>
#include <stack>

#define ll long long int
using namespace std;

//It Took Me # Hours To COde this


// ll find(ll *arr, ll f,ll n) {
// 	for (ll i=0;i<n;i++)
// 	{
// 		if (arr[i] == f) {
// 			return i;
// 		}
// 	}
// }

void Greater(ll *arr,ll n,ll *greater1,ll *greaterindex) {
	stack<ll> st1;//to store data
	stack<ll>index;//to store index
/*	cout << "Hello In Greater\n";*/
	for (ll i=0; i<n; i++)
	{
/*		cout << "In For Loop\n";*/
		if (st1.empty() && index.empty() || arr[index.top()]>arr[i] ) {
			st1.push(arr[i]);
			index.push(i);
		}
		else {
			while (!st1.empty() && arr[index.top()] < arr[i])
			{
				greater1[index.top()] = arr[i];//this is wrong i guess
				greaterindex[index.top()] = i;
				
				st1.pop();
				index.pop();
			}
			st1.push(arr[i]);
			index.push(i);
		}
	}
	while (!st1.empty() && !index.empty()) {
		greater1[index.top()] = -1;
		greaterindex[index.top()] = -1;
		index.pop();
		st1.pop();
	}
/*	cout << "Done with Greater\n";*/
}


void Smaller(ll *arr, ll n, ll *smaller,ll *smallerindex)
{
	stack<ll> st1;//to store data
	stack<ll>index;//to store index
/*	cout << "Hello In Smaller\n";*/
	for (ll i = 0; i < n; i++)
	{
/*		cout << "In For Loop\n";*/
		if (st1.empty() && index.empty() || arr[index.top()] < arr[i]) {
			st1.push(arr[i]);
			index.push(i);
		}
		else {
			while (!st1.empty() && arr[index.top()] > arr[i])
			{
				smaller[index.top()] = arr[i];//this is wrong i guess
				smallerindex[index.top()] = i;

				st1.pop();
				index.pop();
			}
			st1.push(arr[i]);
			index.push(i);
		}
	}
	while (!st1.empty() && !index.empty()) {
		smaller[index.top()] = -1;
		smallerindex[index.top()] = -1;
		index.pop();
		st1.pop();
	}
/*	cout << "Done with smaller\n";*/

}
int main()
{
	ll *greater,*smaller,*greaterindex,*smallerindex;

	ll n,*arr,i;
	cin >> n;
	arr = new ll[n];
	greater = new ll[n];
	smaller = new ll[n];
	greaterindex = new ll[n];
	smallerindex = new ll[n];
/*	cout << "Input Array\n";*/
	for ( i=0;i<n;i++)
	{
		cin >> arr[i];
	}
/*	cout << "Entering Greater\n";*/
	Greater(arr, n, greater, greaterindex);
/*	cout << "Entering Smaller\n";*/
	Smaller(arr, n,smaller, smallerindex);
/*	cout << "Printing Greater Array\n";*/
	for ( i = 0; i < n;i++)
	{
// 		cout<<"Greater " << greater[i] << " \n";
// 		cout <<"Greater Index"<< greaterindex[i] << " \n";
		if (greaterindex[i] == -1) {
			cout << "-1 ";
		}else if (greaterindex[i] !=  -1) {
			cout << smaller[greaterindex[i]] << " ";
		}
		
	}
	
	
	return 0;
}
