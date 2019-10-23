#include<bits/stdc++.h>
using namespace std;

void list_prime(int n)
{	
	int i;
	if(n<2)
	{
		cout<<"Summation not possible\n";
	}
	//if n can be divided by 2, then we can express 
	//it as summation of 2 only
	else if(n%2==0)			
	{
		for(i=1;i<=n/2;i++)
		{
			cout<<2<<" ";
		}
	}
	else
	{
		//making the number even
		n=n-3;
		//n can be divided by 2 now
		for(i=1;i<=n/2;i++)	
			cout<<2<<" ";
		//add 3, and the summation will be now n
		cout<<3<<" ";
	}
}

int main()
{
	int i,n;
	
	cin>>n;
	
	list_prime(n);

	return 0;
}