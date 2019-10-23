//Reversing a Number
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
char choice='y';
 do
 {
  system("cls");
  int num,rem=0,rev=0;
  cout<<"\nEnter a number : ";
  cin>>num;
  int temp=num;
  while(temp!=0)
   {
 	rem=temp%10;
 	rev=rev*10+rem;
 	temp/=10;
   }
  cout<<"\nThe reverse of "<<num<<" is "<<rev;
  cout<<"\n\nDo you want to continue (y/n) : ";
  cin>>choice;
 }while(choice=='y');
}
