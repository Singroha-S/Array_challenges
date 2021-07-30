#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
     int i=0,ii=n-1,j=0,jj=m-1;
     while(i<=ii && j<=jj)
     {
         //row start
         for(int col=j;col<=jj;col++)
         {
             cout<<a[i][col]<<" ";
         }
         i++;

         //column end
         for(int row=i;row<=ii;row++)
         {
             cout<<a[row][jj]<<" ";
         }
         jj--;

         //row end
         for(int col=jj;col>=j;col--)
         {
             cout<<a[ii][col]<<" ";
         }
         ii--;

         //column start
         for(int row=ii;row>=i;row--)
         {
             cout<<a[row][j]<<" ";
         }
         j++;

     }

    return 0;
}
