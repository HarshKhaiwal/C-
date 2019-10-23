#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
          if(j<=i)
          	cout<<j;
		}
        for(int k=5;k>=1;k-=2)
        {
        	cout<<" ";
        }
        for(int j=5;j>=1;j--)
		{
          if(j<=5-i)
          	cout<<j;
		}
		cout<<"\n";
	}
}