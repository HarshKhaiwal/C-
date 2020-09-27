//To find armstrong numbers b/w 0 to 1000//
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
 
 int count=0,rem;
 for(int i=0;i<1000;i++)
 {
 	int temp=i,sum=0;
 	while(temp!=0)
 	{
 		rem=temp%10;
 		sum+=rem*rem*rem;
 		temp/=10;
 	}
 	if(sum==i)
 	{
 		++count;
 		cout<<"\nThe armstrong no. "<<count<<" is "<<i;
 	}
 }
}
