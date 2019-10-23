#include<iostream>
using namespace std;

int main()
{
	void cal();
	cal();
}
     void cal()
    {
     char ch,choice='y'; int num1,num2;
	 cout<<"\nEnter '+','-','*','/','%','x' : ";
	 cin>>ch;
	 if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
	 {
		cout<<"\nEnter two no. : ";
		cin>>num1>>num2;
		cout<<"\n";
		switch(ch)
		{
			case '+': cout<<num1<<"+"<<num2<<" = "<<num1+num2; break;
			case '-': cout<<num1<<"-"<<num2<<" = "<<num1-num2; break;
			case '*': cout<<num1<<"*"<<num2<<" = "<<num1*num2; break;
			case '/': cout<<num1<<"/"<<num2<<" = "<<num1/num2; break;
			case '%': cout<<num1<<"%"<<num2<<" = "<<num1%num2; break;
			case 'x':break;
		}
	 }
	 else
	 {
	 	cout<<"\nInvalid operation. Try again.";
			         cal();
	 }
	} 
