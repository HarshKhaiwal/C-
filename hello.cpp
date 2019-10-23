#include<iostream>
using namespace std;
int main()
{
 for(int i=2;i<100;i++)
 {
    int flag=1;
    for(int j=2;j<=i/2;j++)
    {
        if(i%j==0)
        {
            flag=0;
            break;
        }

    }
            if(flag==1)
            cout<<i<<" ";
 }
}
