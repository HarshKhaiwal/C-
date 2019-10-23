#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[20];
    int i,j,l=0,flag=0;
    cout<<"\nEnter the string : ";
    gets(str1);
    l=strlen(str1);
    for(int i=0;i<l;i++)
    {
        if(str1[i]!=str1[l-i-1])
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        cout<<"\nIt is a palindrome.";
    else
        cout<<"\nIt is not a palindrome.";

}
