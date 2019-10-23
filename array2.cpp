#include<iostream>
using namespace std;
int main()
{
	int A[5][5];
	cout<<"Enter matrix A:";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\nEnter A["<<i<<"]["<<j<<"] : ";
			cin>>A[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<"\n";
	}
}