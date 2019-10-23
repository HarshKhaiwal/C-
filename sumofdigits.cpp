//Sum of Digits of a number
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int num,sum=0,rem=0;
    cout<<"\nEnter a number : ";
    cin>>num;
    int temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum+=rem;
        temp/=10;
    }
    cout<<"\nSum of digits of no. "<<num<<" is = "<<sum;
}
