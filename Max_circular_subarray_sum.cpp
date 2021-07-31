#include<bits/stdc++.h>
using namespace std;

int kadane(int a[],int n)
{
    int cs=0;
    int ms=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cs+=a[i];
        if(cs<0)
        {
            cs=0;
        }
        ms=max(cs,ms);
    }
    return ms;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int wrapsum;
    int nonwrapsum=kadane(a,n);
    int ts=0;
    for(int i=0;i<n;i++)
    {
        ts+=a[i];
        a[i]=-a[i];
    }
    wrapsum = ts + kadane(a,n);
    cout<<max(wrapsum,nonwrapsum);

    return 0;
}
