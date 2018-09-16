include <iostream>
 
 
 
/* Driver program to test above functions */
 
 
 
int main()
{
	int n,*a,*b,counta=0;
	int i=0,j=0,z=0,key=0,k=0,flag=1,temp=0;
	//Number of elements
	std::cin >> n;
	a = new int[10000000];
	b = new int[10000000];
	//Array Input
	for ( i=0;i<n;i++)
	{
	
		std::cin >> a[i];
			
	
	   
	}
	for ( i = 0; i < n; i++)
	{
		std::cin >> b[i];
	}
    // for(j=0;j<=key;j++)
	  // {
	    //   std::cout<<a[j];
	       
	   //}
 
		for ( i=0; i< n; i++)
		{
		    key=i;
		for ( j =i; j < n; j++)//a is defender 
		{                     //b is attackeer
		if ( a[key]<a[j])
		{
		for(k=0;k<n;k++)
		{
		if(a[j]<b[k])    
		{
		counta=counta+1;
		}
 
		}
		}//end of outer if
		}
		}
	
	std::cout << counta;
 
 
}