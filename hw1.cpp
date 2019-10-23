#include<iostream>
using namespace std;
int main()

{   int a,b,choice;char choice2='y';
    do
    {
    cout<<"\nEnter two integers : ";
    cin>>a>>b;
    cout<<"\nEnter the choice : ";
    cin>>choice;

      switch(choice)
     {
        case 1: cout<<"\nSum of two integers = "<<a+b; break;
        case 2: cout<<"\nDifference of two numbers = "<<a-b;break;
        case 3: cout<<"\nProduct of two numbers = "<<a*b;break;
        case 4: cout<<"\nDivison of two numbers = "<<a/b;break;
        default: cout<<"\nWrong choice";break;
     }
    cout<<"\n\nDo you want to continue(y/n) : ";
    cin>>choice2;
    }while(choice2=='y');



}
