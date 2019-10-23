#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"\nEnter odd no. of rows and columns : ";
	cin>>n;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			if(i==1||i==n)
			cout<<"0 ";
		    else
		    	if(j==1||j==n)
		    		cout<<"0 ";
		    	else
		    		if (i==n/2+1&&j==n/2+1)
		    		    cout<<"2 ";
		    	    else
		    	    	cout<<"1 ";

		}
		cout<<"\n";
	}
}