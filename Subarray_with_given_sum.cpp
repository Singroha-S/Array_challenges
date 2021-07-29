#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int st=-1;                         //O(n)
    int en=-1;
    int i=0,j=0,sum=0;

    while(j<n && sum+a[en]<=s)
    {
        sum+=a[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<" "<<j;
        return 0;
    }

    while(j<n)
    {
        sum+=a[j];
        while(sum>s)
        {
            sum-=a[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en;

    return 0;
}


/*
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s;                 //O(n^2)
    cin>>s;

    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            if(sum==s)
            {
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
    return 0;
}
*/
