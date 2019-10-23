#include<iostream>
using namespace std;
int main()
{
	for(int i=6;i>=1;i--)
	{
	 for(int k=6;k>i;k--)
	 {
	  cout<<" ";
	 } 
	 for(int j=2*i,l=5;j>1;j--,l--)
	 {
       if(l>=0)
       	cout<<l;
       else
       	cout<<-l;

	 }
	 cout<<"\n";
	}
		
	for(int i=2;i<=6;i++)
	{
	 for(int k=1;k<=6-i;k++)
	 {
	  cout<<" ";
	 } 
	 for(int j=0,l=-1;j<2*i-1;j++,l--)
	 {
	 	if(l+i>=0)
       cout<<l+i;
        else
        	cout<<-l-i;

	 }
	 cout<<"\n";
	}

}