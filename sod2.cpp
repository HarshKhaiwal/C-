//Sum of Digits of a number
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    long long num,po,sum=0,rem=0,i=0,A[500];
    cout<<"\nEnter the power : ";
    cin>>po;
    num=pow(pow(2,10),po/10);
    long long temp=num;
    while(temp!=0)
    {
        A[i]=temp%10;
        i++;
        temp/=10;
    }
    for(int j=0;j<=i-1;j++)
        sum+=A[j];
    cout<<"\nSum of digits of no. "<<num<<" is = "<<sum;
}
