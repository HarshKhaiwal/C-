//********************************************Product of two Matrices**************************************//

#include<iostream>
using namespace std;
int main()
{
    int A[10][10],B[10][10],K[10][10],r1,r2,c1,c2;
     cout<<"Enter rows and columns for matrix A : ";
     cin>>r1>>c1;
     cout<<"\nEnter rows and columns for matrix B : ";
     cin>>r2>>c2;
     if(c1!=r1)
      {
        cout<<"\nWrong input";
      }
      cout<<"\nEnter elements for matrix A\n";
      for(int i=0;i<r1;i++)
      {

          for(int j=0;j<c1;j++)
          {
              cout<<"\nEnter element A["<<i<<"]["<<j<<"] : ";
              cin>>A[i][j];
          }
      }
      cout<<"\nEnter elements for matrix B\n";
      for(int i=0;i<r2;i++)
      {

          for(int j=0;j<c2;j++)
          {
              cout<<"\nEnter element B["<<i<<"]["<<j<<"] : ";
              cin>>B[i][j];
          }
      }
      cout<<"\n Matrix A\n  ";
      for(int i=0;i<r1;i++)
      {

          for(int j=0;j<c1;j++)
          {
              cout<<A[i][j]<<" ";
          }
          cout<<"\n  ";
      }
      cout<<"\n Matrix B\n  ";
      for(int i=0;i<r2;i++)
      {

          for(int j=0;j<c2;j++)
          {
              cout<<B[i][j]<<" ";
          }
          cout<<"\n  ";
      }
     for(int i=0;i<r1;i++)
     {
         for(int j=0;j<c2;j++)
         {
             K[i][j]=0;
             for(int k=0;k<r2;k++)
             {
                 K[i][j]+=A[i][k]*B[k][j];
             }
             cout<<"\n";
         }
     }
     cout<<"\nThe Product of Two Matrices is : ";

     for(int i=0;i<r1;i++)
     {
         for(int j=0;j<c2;j++)
         {
             cout<<K[i][j]<<" ";
         }
         cout<<"\n\t\t\t\t ";
     }
 return 0;
}
