#include<iostream>
using namespace std;
int main()
{  /* int n;
	cout<<"Enter an integer : ";
	cin>>n;
	for(int i=1;i<n;i++)
	{
	 for(int k=n-i;k>1;k--)
	 {
	 	cout<<" ";
	 }
	 for(int j=1;j<2*i;j+=1)
	 {
	  cout<<i;
	 }
	 cout<<"\n";
	}
	return 0;*/
	for(int i=1;i<5;i++)
	{
		for(int j=5-i;j>1;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<2*i;k++)
		{
			if(k==1||k==i-1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
}