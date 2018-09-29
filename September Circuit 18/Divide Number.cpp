#include <iostream>
#include <stack>
#include<string.h>
#include <map> 
#include <iterator> 


#define ll long long int
using namespace std;



int main()
{
	ll testcases, n, A, B, C, D, i,j=0,ij,ik, mult = 0, max = 0,index;
	ll factors[40000] = { 0 };
	ll z, x, c, v;
	ll numberoffactors;

	bool found = false;

	cin >> testcases;
	for (ik = 0; ik < testcases; ik++)
	{
		index = 0;
		cin >> n;//input number
		//finding all the factors
		//cout << "factor for loop about to start\n";
		for (ij = 1; ij <= n; ++ij)
		{
			//cout << "Finding Factors\n";
			if (n%ij == 0)
			{
				//cout << "Found Something\n";
				factors[index] = ij;
				//cout<<"Factors" << factors[index]<<"\n";
				//cout << "number shown\n";
				index++;
			}
		}
		numberoffactors = index;
		i = 0;//first loop
		j = 0;//2nd loop
		z = 0;//3rd loop
		x = 0;//4th loop
		for ( i = 0; i < numberoffactors; i++)
		{
			for (j=0;j<numberoffactors;j++)
			{
				for (z = 0; z < numberoffactors; z++) 
				{
					for (x = 0; x < numberoffactors; x++)
					{
						if ((factors[i]+factors[j]+factors[z]+factors[x])==n && (n%factors[i]==0) && (n % factors[j] == 0) 
							&& (n % factors[z] == 0) && (n % factors[x] == 0))
						{
							mult = factors[i] * factors[j] * factors[z] * factors[x];
							if (mult > max) {
								max = mult;
								found = true;
								//cout<< factors[i]<<"\n"<< factors[j]<<"\n"<< factors[z]<<"\n"<< factors[x]<<"\nSecond\n";
							}
						}
						
					}
				}
			}
		}

		if (found == false) {
			cout << "-1\n";
		}
		else {
			cout << max << "\n";
		}
		found = false;
		max = 0;
		index = 0;
		numberoffactors = 0;
		mult = 0;
		numberoffactors = index;
		i = 0;//first loop
		j = 0;//2nd loop
		z = 0;//3rd loop
		x = 0;//4th loop
		
	}
	

	return 0;
}