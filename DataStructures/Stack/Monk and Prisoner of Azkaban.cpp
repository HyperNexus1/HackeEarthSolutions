#include <cstring>
#include <iostream>
#include <stack>

#define ll long long

using namespace std;



int main()
{
	ll *array,*x,*y,sum;
	ll n,i,j;
	stack<ll>st1;
	cin >> n;
	array = new ll[n+1];
	x = new ll[n+1];
	y = new ll[n+1];
	memset(x, 0, (n+1)* sizeof(x[0]));
	memset(y, 0, (n + 1) * sizeof(y[0]));
	memset(array, 0, (n + 1) * sizeof(array[0]));
// 	for (i = 1; i <= n; i++)
// 	{
// 		cout << x[i] << " " << y[i] <<" "<<array[i]<< "\n";//debugging
// 	}
	for (i=1;i<=n;i++)
	{
// 		if (i == 1) {
// 			cout << "in input loop\n";//debugging
// 		}
		cin >> array[i];
	}
// 	for (i = 1; i <= n; i++)
// 	{
// 		cout <<"Print"<< array[i]<<"\n";//debugging
// 	}
	//to find x
	for (i = 1; i <=n; i++)
	{
// 		if (i == 1) {
// 			cout << "In Calculation Loop of x\n";//debugging
// 		}

		//find x for i
		/*cout << "Finding x\n";*/
		if (i - 1 <= 0) {
			x[i] = -1;
			/*cout << "i-1<=0\n";*/
			continue;
		}else if (st1.empty()) {
			st1.push(array[i]);
			x[i] = i;
			/*cout << "pushed default element\n";*/
		}
		
		for (j=i-1;j>0;j--)
		{
			if (st1.top()<array[j])
			{
				st1.pop();
				st1.push(array[j]);
				x[i] = j;
				/*cout << "Found the greater element\n";*/
				break;
			}
		}
		if (st1.top() == array[i])
		{
			/*cout << "ST1.TOP ==aray[i]";*/
			x[i] = -1;
		}
		while (!st1.empty())
			st1.pop();
	}
	

	//to find y
	for (i = 1; i <= n; i++)
	{
// 		if (i == 1) {
// 			cout << "In Calculation Loop y\n";
// 
// 		}

		//find y for i
		/*cout << "Finding y\n";*/
		if (i + 1 >= n) {
			y[i] = -1;
			/*cout << "i+1>=n\n";*/
			continue;
		}
		else if (st1.empty()) {
			st1.push(array[i]);
			y[i] = i;
			
		}

		for (j = i + 1; j <= n; j++)
		{
			if (st1.top() < array[j])
			{
				st1.pop();
				st1.push(array[j]);
				y[i] = j;
				/*cout << "Greter y element found\n";*/
				break;
			}
		}
		if (st1.top() == array[i])
		{
			y[i] = -1;
		}
		while (!st1.empty())//Clearing stck after all operations
			st1.pop();
	}
	for (i=1;i<=n;i++)
	{
		sum = x[i] + y[i];
		/*cout << "x of" << i << " " << x[i] << " y of i " << y[i] << "\n";*/
		cout << sum <<" ";
	}
}