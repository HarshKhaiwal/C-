//Reversing a Number
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
 system("cls");
 int num,rem=0,rev=0;
 cout<<"Enter a number";
 cin>>num;
 while(num!=0)
 {
 	rem=num%10;
 	rev=rev*10+rem;
 	num/=10;
 }
 cout<<"\nThe reverse of "<<num<<" is "<<rev;
}