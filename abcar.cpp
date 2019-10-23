#include<iostream>
using namespace std;
int main()
{
	int cn;
	cout<<"\nEnter your car no. : ";
	cin>>cn;
   if(cn<=1000)
	if(cn%2==0)
		{
		 if(cn%4==0)
			cout<<"\nYou are allowed to drive car on sunday."
		 else
			cout<<"\nYou are not allowed to drive car on sunday."
	    }
}