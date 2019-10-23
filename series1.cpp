#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int sum=0;
	for(int i=3;i<=8;i++)
	{
	 sum+=pow(2,i)+(pow(2,i)-1);
	}
	cout<<sum;
}