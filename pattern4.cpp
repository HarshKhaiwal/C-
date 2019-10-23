#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<5;i++)
	{
		for(int j=5-i;j>1;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<2*i;k++)
		{
			if(k==1||k==2*i-1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	for(int i=4;i>=1;i--)
	{
		if(i!=4)
	{
		for(int j=4-i;j>=1;j--)
			cout<<" ";
		for(int k=2*i;k>1;k--)
		{
			if(k==2*i||k==2)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}
	}
}