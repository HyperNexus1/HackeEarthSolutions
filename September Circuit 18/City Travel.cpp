#include <iostream>
#include <map> 
#include <iterator> 


#define ll long long int
using namespace std;



int main()
{

	ll s, x, n, ti, yi,i,j,sum=0;
	bool f = true;
	cin >> s >> x >> n;
	//cout << s << x << n;
	map <ll, ll> Hash;
	for (i=1;i<=n;i++)
	{
		cin >> ti;
		cin >> yi;
		Hash.insert(pair <ll, ll>(ti, yi));
	}
	i = 1;
	if (x >= s) {
		f = false;

		
	}
	else {
		while (!(sum >= s))
		{

			if (Hash.find(i) == Hash.end())
			{
				//not found
				sum = sum + x;
			}
			else {
				//found
				sum = sum + Hash.find(i)->second;

			}
			i++;
		}
		
	}
	if (f == false) {
		cout << "1";
	}
	else if (f == true) {
		cout << i - 1;
	}
	
	return 0;
}