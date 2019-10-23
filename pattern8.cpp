#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=12;j++)
		{
           if(i<j)
           	cout<<" ";
           else
           	cout<<"*";
           if(i<=12-j)
           	cout<<" ";
           else
           	cout<<"*";

     	}
		cout<<"\n";
	}
	for(int i=4;i>=0;i--)
	{
		for(int j=12;j>=0;j--)
		{
			if(j==12||j==0)
				cout<<"*";
			else
		{
           if(i<j)
           	cout<<" ";
           else
           	cout<<"*";
           if(i<12-j)
           	cout<<" ";
           else
             	cout<<"*";
        }
		} cout<<"\n";
	}
}