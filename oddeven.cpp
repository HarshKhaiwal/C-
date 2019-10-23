#include<iostream>
using namespace std;
int main()
{
	void carno(int car);
	int N,carn;
	cout<<"Enter N : ";
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cout<<"\nEnter car no. : ";
		cin>>carn;
		carno(carn);
	}
}

void carno(int carn)
{
	int temp=carn,sumeve=0,sumodd=0,rem=0;
	while(temp!=0)
	{
		rem=temp%10;
		if (rem%2==0)
		 sumeve+=rem;
		else 
			sumodd+=rem;
		temp/=10;
	}

	if(sumeve%4==0||sumodd%3==0)
		cout<<"\nYes";
	else
		cout<<"\nNo";

}