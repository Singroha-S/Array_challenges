#include<bits/stdc++.h>
using namespace std;

bool pairsum(int a[],int n,int k)
{
    int st=0;
    int en=n-1;                  //O(n)
    while(st<en)
    {
        if(a[st]+a[en]==k)
        {
            cout<<st<<" "<<en<<endl;
            return true;
        }
        else if(a[st]+a[en]>k)
        {
            en--;
        }
        else
        {
            st++;
        }
    }
    return false;
}

/*
BRUTE FORCE APPPROACH O(N^2)
bool pairsum(int a[],int n,int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
*/

int main()
{
    int a[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(a,8,k);

    return 0;
}
