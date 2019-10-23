#include<iostream>
using namespace std;
int main()
{
    double a,fact=1;
    cout<<"Enter an integer : ";
    cin>>a;
    if(a<0)
    {
       cout<<"\n Please Enter an integer greater than 1";
    }
    else
    {

     for(int i=1;i<=a;i++)
      {
        fact*=i;
      }
    cout<<"\nFactorial of "<<a<<" is "<<fact;
    }
}
