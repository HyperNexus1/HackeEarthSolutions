/*
// Sample code to perform I/O:
 
cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT
 
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
 
// Write your code here
#include <iostream>
using namespace std;
int main() {
	int n,*a1,*a2;
	std::cin >> n;
	a1 = new int[n];
	a2 = new int[n];
 
	for (int i = 0; i < n; i++)
	{
		std::cin >> a1[i];
	}
	for (int i = 0; i < n; i++)
	{
		std::cin >> a2[i];
	}
	for (int i = 0; i < n; i++)
	{
		std::cout << a1[i] + a2[i]<<" ";
	}
}